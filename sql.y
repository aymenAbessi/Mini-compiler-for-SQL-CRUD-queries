%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <stdbool.h>
extern int yylex_destroy(void);
int yylex(void);
int yyerror(char *s);

int nb_champs = 1; 
int nb_primary = 0 ;
int updateOrDelete = -1 ;
bool whereNotUsed = false ;

bool jointure = false ;
int nb_tables_selected = 1 ;

GtkWidget *window;
GtkWidget *input_field;
GtkWidget *run_button;
GtkWidget *result_label;
extern char buffer[1000];

extern void yyaccept();
extern void yyabort();
extern char* yytext;
extern int yylino ;
void run_button_clicked(GtkWidget *button, gpointer data);
%}

%union {
    int op;
    int isVirgule;
}

%code {
    char buffer[1000]; // Define buffer here
}


%token CREATETK
%token SELECTTK
%token DELETETK
%token TABLETK
%token FROMTK
%token WHERETK
%token UPDATETK
%token SETTK
%token REFTK
%token FOREIGNTK
%token PRIMARYTK
%token TYPEWITHOUTTK
%token TYPEWITHTK
%token IDTK
%token <op> OPTK
%token <num> NBTK
%token PARENTOUV
%token PARENTFERM
%token <isVirgule> VIRGULE
%token POINTVIR
%token STRINGTK
%token INTK
%token ANDTK
%token NOTINTK
%token LIKETK
%token ORTK
%token NOTTK
%token ASTERIK
%token NOTNULLTK
%token UNIQUETK
%token CHECKTK
%token DEFAULTTK

%start query
%left ORTK 
%%

query: diff_query  END 
{
    
    if(updateOrDelete == 2 && whereNotUsed){
         strcat(buffer, "⚠️ WARNING: You are about to delete all records from the table. Are you sure you want to proceed? (yes/no) ");
         gtk_label_set_text(GTK_LABEL(result_label), buffer);
    }else if(updateOrDelete == 1 && whereNotUsed){
         strcat(buffer, "⚠️ WARNING: You are about to update all records of the table. Are you sure you want to proceed? (yes/no) ");
         gtk_label_set_text(GTK_LABEL(result_label), buffer);
    }
    whereNotUsed = false ;
    strcat(buffer, "✅ Valid query");
    
    gtk_label_set_text(GTK_LABEL(result_label), buffer);

    
    gtk_widget_show(window);
    gtk_main();
}
	 | diff_query END query 
;

diff_query: update_query {updateOrDelete=1;}| delete_query {updateOrDelete=2;}| create_query | select_query { 
      strcat(buffer, "Select query accepted\n");
    printf("Select query accepted\n");}
;
create_query: CREATETK TABLETK IDTK PARENTOUV column_list PARENTFERM {

    if(nb_primary>1){
        strcat(buffer, "error : you specify than one primary key ❗❌🚨");
        yyerror( "error : you specify than one primary key");
         gtk_label_set_text(GTK_LABEL(result_label), buffer);
    }
    
    
   
    printf("nb of primary key used :%d",nb_primary);
}
;
update_query: UPDATETK IDTK SETTK list_set_statement list_statement_where_opt
;

delete_query: DELETETK FROMTK IDTK list_statement_where_opt
;

select_query: SELECTTK ASTERIK FROMTK mult_id list_statement_where_opt|SELECTTK mult_id FROMTK{jointure=TRUE ;} mult_id {jointure=FALSE ;}list_statement_where_opt  {
    
    char c[10];
    char x[30];
strcat(x,">> nb of fields selected :");
snprintf(c, 10, "%d", nb_champs);

 strcat(x,c);
   strcat(x,"\n");
  strcat(buffer,x);
  if(nb_tables_selected>1)
   strcat(buffer,"you are performing join between multi tables \n");
   printf("nb de tables:%d\n",nb_tables_selected);
    printf("nb of fields selected :%d\n",nb_champs); 
    nb_champs=1;
    nb_tables_selected=1;
    }
;
constraint_after_col: DEFAULTTK values|CHECKTK PARENTOUV list_condition PARENTFERM|UNIQUETK|NOTNULLTK|/*epsilon*/
;
mult_id : mult_id VIRGULE IDTK {
    if(jointure)nb_tables_selected ++ ;
    if(!jointure)nb_champs++; 
}|IDTK 
;


column_list: column_def VIRGULE column_list
		   | column_def
		   ;
column_def: IDTK TYPEWITHOUTTK constraint_after_col
		  | IDTK TYPEWITHTK PARENTOUV NBTK PARENTFERM constraint_after_col
          | IDTK TYPEWITHTK PARENTOUV NBTK PARENTFERM PRIMARYTK {nb_primary++;}
          | IDTK TYPEWITHOUTTK PRIMARYTK {nb_primary++;}
		  | PRIMARYTK PARENTOUV IDTK PARENTFERM 
		  | FOREIGNTK PARENTOUV IDTK PARENTFERM REFTK IDTK  PARENTOUV IDTK PARENTFERM 
          ;

list_set_statement :  set_statement | list_set_statement VIRGULE set_statement ;

list_statement_where_opt : /*epsilon*/ {
    whereNotUsed=TRUE;
} | list_statement_where ;

list_statement_where : WHERETK list_condition ;

list_condition : condition | list_condition ANDTK condition ;

condition: in_statement | not_in_statement | like_statement | or_statement | not_statement | simple_condition ;

like_statement: IDTK LIKETK STRINGTK | NOTTK IDTK LIKETK STRINGTK ;

or_statement: condition ORTK condition ;

not_statement: NOTTK IDTK OPTK values ;

simple_condition: IDTK OPTK values ;

not_in_statement: IDTK NOTINTK PARENTOUV strings PARENTFERM ;

in_statement: IDTK INTK PARENTOUV strings PARENTFERM | IDTK INTK PARENTOUV numbers PARENTFERM ;

strings: STRINGTK | strings VIRGULE STRINGTK ;





numbers: NBTK | numbers VIRGULE NBTK ;

set_statement: IDTK OPTK values {
        if (yylval.op == 1) {
            printf("Operator is equal\n");
        } else {
            printf("Operator is not equal\n");
        }
} ;

values: STRINGTK | NBTK ;
END : POINTVIR { yyaccept("correct \n"); printf("> ");} ;
%%

#include "lex.yy.c"

int yyerror(char *s){
    strcat(buffer,s);
    strcat(buffer,"\n");
    printf("%s\n",s);
    yyrestart(yyin);
    yyabort();
    strcat(buffer,"query not accepted ! 😔") ;
      gtk_label_set_text(GTK_LABEL(result_label), buffer);
    return 1;
}

void run_button_clicked(GtkWidget *button, gpointer data) {
       memset(buffer, '\0', sizeof(buffer));
       nb_primary = 0 ;
     gtk_label_set_text(GTK_LABEL(result_label), "");
    const gchar *input_text = gtk_entry_get_text(GTK_ENTRY(input_field));
    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }
    fprintf(fp, "%s\n", input_text);
    fclose(fp);
    yyin = fopen("input.txt", "r");
    if (yyin == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }
 
    yyparse();

    

   
}

int main(int argc, char *argv[]){
    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Input Window");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    GtkWidget *vbox = gtk_vbox_new(FALSE, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    input_field = gtk_entry_new(); // Create text input field
    gtk_box_pack_start(GTK_BOX(vbox), input_field, TRUE, TRUE, 0);

    run_button = gtk_button_new_with_label("Run"); // Create Run button
    g_signal_connect(run_button, "clicked", G_CALLBACK(run_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(vbox), run_button, TRUE, TRUE, 0);

    // Create a label to display the result
    result_label = gtk_label_new("");
    gtk_box_pack_start(GTK_BOX(vbox), result_label, TRUE, TRUE, 0);

    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
// DELETE FROM clients WHERE  category = 'Gold' OR category = 'Silver' AND age >= 25 AND age <= 50 AND NOT come > 100000 AND age < 30 AND city IN ('New York', 'Los Angeles', 'Chicago', 'Houston') AND NOT email LIKE '%@example.com';

// update clients set status = 'Premium', discount = 1 where category = 'Gold' or category = 'Silver' and age >= 25 and age <= 50 and not come > 100000 and age < 30  and city in ('New York', 'Los Angeles', 'Chicago', 'Houston') and not email like '%@example.com';



/*
create table client ( id varchar(8) PRIMARY KEY , 
t$el varchar(8) PRIMARY KEY 
age number(2) ) ;


CREATE TABLE utilisateur(id INT(4) PRIMARY KEY , constraint age CHECK (Age>=1));
*/

/*
SELECT name ,age 
FROM u$ser ;
SELECT name,age,nom,nn,jj,jkk FROM user where 
category = 'Gold' or category = 'Silver' and 
age >= 25 and age <= 50 and not come > 100000 and age < 30  
and city in ('New York', 'Los Angeles', 'Chicago', 'Houston') 
and not email like '%@example.com';



CREATE TABLE Persons ( ID int(45) NOT NULL , LastName varchar(255) NOT NULL );


CREATE TABLE Persons ( ID int(45) NOT NULL , LastName varchar(255) NOT NULL ,   FirstName varchar(255) ,   Age int(45) check (age = 45) ,   City varchar(255) );

CREATE TABLE Persons ( ID int(45) , LastName varchar(255) );
CREATE TABLE Persons ( ID int(45),  LastName varchar(255) );
CHECKTK PARENTOUV list_condition PARENTFERM

multi_constraints : |VIRGULE multi_constraints_last_line;

multi_constraints_last_line : multi_constraints_last_line VIRGULE constraint_last_line;

constraint_last_line : CONSTRAINTTK IDTK CHECKTK PARENTOUV list_condition PARENTFERM|CONSTRAINTTK IDTK UNIQUETK PARENTOUV mult_id PARENTFERM
;

*/