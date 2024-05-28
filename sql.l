%{
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "sql.tab.h"

int line_number = 1; 

enum op_code {
  EQ = 1,
  NE = 2,
  LT = 3,
  GT = 4,
  LE = 5,
  GE = 6
};

extern char buffer[1000];


void yyaccept() {
    printf("Query accepted!\n");
    //exit(EXIT_SUCCESS);
}

void yyabort() {
    printf("Query not accepted!\n");
   // exit(EXIT_FAILURE);
}
%}

%{

extern int line_number;

void handle_error(const char *error_type, const char *error_message) {
   strcat(buffer, "Error : Special character detected in ID\n");

   char c[10];
    char x[30];
strcat(x,"\n ** Erreur : ligne ");
snprintf(c, 10, "%d", line_number);

 strcat(x,c);
   strcat(x,"\n");
  strcat(buffer,x);
        
    fprintf(stderr, "%s ** Erreur : ligne %d **\n%s\n", error_type, line_number, error_message);
    line_number=1;
}
%}
%option yylineno
%option caseless
id [A-Za-z_][A-Za-z0-9_]* 
typeWithParent number|varchar|char|int|float
typeWithoutParent date|bool
op <>|<|>|<=|>=|=
string '[^']+'
createKW create
deleteKW delete
selectKW select
tableKW table
fromKW from
whereKW where
updateKW update
setKW set
referencesKW references
foreignKW foreign
primaryKW primary
keyKW key
InKW in
CheckKw check
AndKW and
NotInKW not
DefaultKw default
NullKw null
UniqueKw unique
LikeKW like
OrKW or
specialChar [\$\%\&\#\@\!\^\*\[\]\{\}\|\:\;\"\<\>\?\`\~\+\-\_\.\?\/\\]

%%

{createKW} { printf("CREATE : %s \n",yytext); return CREATETK; }
{selectKW} { printf("SELECT : %s \n",yytext);yylval.isVirgule=0; return SELECTTK; }
{deleteKW} { printf("DELETE : %s \n",yytext); return DELETETK;}
{tableKW} { printf("TABLE : %s \n",yytext); return TABLETK;}
{fromKW} { printf("FROM : %s \n",yytext); return FROMTK;}
{whereKW} { printf("WHERE : %s \n",yytext); return WHERETK; }
{updateKW} { printf("UPDATE : %s \n",yytext); return UPDATETK; }
{setKW} { printf("SET : %s \n",yytext); return SETTK;}
{referencesKW} { printf("%s \n",yytext);  return REFTK; }
{foreignKW}[ ]{keyKW} { printf("%s \n",yytext); return FOREIGNTK; }
{primaryKW}[ ]{keyKW} { printf("%s \n",yytext); return PRIMARYTK; }
{InKW} { printf("%s \n",yytext); return INTK;}
{AndKW} { printf("%s \n",yytext); return ANDTK;}
{NotInKW}[ ]{InKW} { printf("%s \n",yytext); return NOTINTK;}
{NotInKW} { printf("%s \n",yytext); return NOTTK;}
{NotInKW}[ ]{NullKw} { printf("%s \n",yytext); return NOTNULLTK;}
{LikeKW} { printf("%s \n",yytext); return LIKETK;}
{CheckKw} { printf("%s \n",yytext); return CHECKTK;}
{OrKW} { printf("%s \n",yytext); return ORTK;}
{UniqueKw} { printf("%s \n",yytext); return UNIQUETK;}
{typeWithoutParent} { printf("TYPE WITHOUT PARENT : %s \n",yytext); return TYPEWITHOUTTK; }
{typeWithParent} { printf("TYPE WITH PARENT : %s \n",yytext); return TYPEWITHTK; }
{DefaultKw} { printf("id : %s \n",yytext); return DEFAULTTK; }
{id} { printf("id : %s \n",yytext); return IDTK; }
{op} {  printf("operator: %s \n", yytext);
  if (strcmp(yytext, "=") == 0) {
    yylval.op = EQ;
  } else if (strcmp(yytext, "<>") == 0) {
    yylval.op = NE;
  } else if (strcmp(yytext, "<") == 0) {
    yylval.op = LT;
  } else if (strcmp(yytext, ">") == 0) {
    yylval.op = GT;
  } else if (strcmp(yytext, "<=") == 0) {
    yylval.op = LE;
  } else if (strcmp(yytext, ">=") == 0) {
    yylval.op = GE;
  } else {
   yylval.op = 0 ;
  }
  return OPTK;}
[0-9]+ { printf("number %s \n",yytext);return NBTK;}
"(" { printf(" %s \n",yytext); return PARENTOUV;}  
")" { printf("%s \n",yytext); return PARENTFERM; }  
"," {printf("%s \n",yytext);yylval.isVirgule=1; return VIRGULE;}
";" {printf("%s \n",yytext); return POINTVIR;}
"*" {printf("%s \n",yytext); return ASTERIK;}
{string} { printf("string : %s \n",yytext); return STRINGTK; }
[ \t\r] {}
[\n] {line_number++;}
{id}{specialChar}|{id}{specialChar}{id}|{specialChar}{id} {
handle_error("Error : Special character detected in ID\n",yytext);
 }
. { printf("Error: %s \n", yytext); }
%%

int yywrap() { return 1; }
