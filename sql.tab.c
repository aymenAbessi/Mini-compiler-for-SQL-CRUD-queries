/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sql.y"

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

#line 102 "sql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sql.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CREATETK = 3,                   /* CREATETK  */
  YYSYMBOL_SELECTTK = 4,                   /* SELECTTK  */
  YYSYMBOL_DELETETK = 5,                   /* DELETETK  */
  YYSYMBOL_TABLETK = 6,                    /* TABLETK  */
  YYSYMBOL_FROMTK = 7,                     /* FROMTK  */
  YYSYMBOL_WHERETK = 8,                    /* WHERETK  */
  YYSYMBOL_UPDATETK = 9,                   /* UPDATETK  */
  YYSYMBOL_SETTK = 10,                     /* SETTK  */
  YYSYMBOL_REFTK = 11,                     /* REFTK  */
  YYSYMBOL_FOREIGNTK = 12,                 /* FOREIGNTK  */
  YYSYMBOL_PRIMARYTK = 13,                 /* PRIMARYTK  */
  YYSYMBOL_TYPEWITHOUTTK = 14,             /* TYPEWITHOUTTK  */
  YYSYMBOL_TYPEWITHTK = 15,                /* TYPEWITHTK  */
  YYSYMBOL_IDTK = 16,                      /* IDTK  */
  YYSYMBOL_OPTK = 17,                      /* OPTK  */
  YYSYMBOL_NBTK = 18,                      /* NBTK  */
  YYSYMBOL_PARENTOUV = 19,                 /* PARENTOUV  */
  YYSYMBOL_PARENTFERM = 20,                /* PARENTFERM  */
  YYSYMBOL_VIRGULE = 21,                   /* VIRGULE  */
  YYSYMBOL_POINTVIR = 22,                  /* POINTVIR  */
  YYSYMBOL_STRINGTK = 23,                  /* STRINGTK  */
  YYSYMBOL_INTK = 24,                      /* INTK  */
  YYSYMBOL_ANDTK = 25,                     /* ANDTK  */
  YYSYMBOL_NOTINTK = 26,                   /* NOTINTK  */
  YYSYMBOL_LIKETK = 27,                    /* LIKETK  */
  YYSYMBOL_ORTK = 28,                      /* ORTK  */
  YYSYMBOL_NOTTK = 29,                     /* NOTTK  */
  YYSYMBOL_ASTERIK = 30,                   /* ASTERIK  */
  YYSYMBOL_NOTNULLTK = 31,                 /* NOTNULLTK  */
  YYSYMBOL_UNIQUETK = 32,                  /* UNIQUETK  */
  YYSYMBOL_CHECKTK = 33,                   /* CHECKTK  */
  YYSYMBOL_DEFAULTTK = 34,                 /* DEFAULTTK  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_query = 36,                     /* query  */
  YYSYMBOL_diff_query = 37,                /* diff_query  */
  YYSYMBOL_create_query = 38,              /* create_query  */
  YYSYMBOL_update_query = 39,              /* update_query  */
  YYSYMBOL_delete_query = 40,              /* delete_query  */
  YYSYMBOL_select_query = 41,              /* select_query  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_43_2 = 43,                      /* $@2  */
  YYSYMBOL_constraint_after_col = 44,      /* constraint_after_col  */
  YYSYMBOL_mult_id = 45,                   /* mult_id  */
  YYSYMBOL_column_list = 46,               /* column_list  */
  YYSYMBOL_column_def = 47,                /* column_def  */
  YYSYMBOL_list_set_statement = 48,        /* list_set_statement  */
  YYSYMBOL_list_statement_where_opt = 49,  /* list_statement_where_opt  */
  YYSYMBOL_list_statement_where = 50,      /* list_statement_where  */
  YYSYMBOL_list_condition = 51,            /* list_condition  */
  YYSYMBOL_condition = 52,                 /* condition  */
  YYSYMBOL_like_statement = 53,            /* like_statement  */
  YYSYMBOL_or_statement = 54,              /* or_statement  */
  YYSYMBOL_not_statement = 55,             /* not_statement  */
  YYSYMBOL_simple_condition = 56,          /* simple_condition  */
  YYSYMBOL_not_in_statement = 57,          /* not_in_statement  */
  YYSYMBOL_in_statement = 58,              /* in_statement  */
  YYSYMBOL_strings = 59,                   /* strings  */
  YYSYMBOL_numbers = 60,                   /* numbers  */
  YYSYMBOL_set_statement = 61,             /* set_statement  */
  YYSYMBOL_values = 62,                    /* values  */
  YYSYMBOL_END = 63                        /* END  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 37 "sql.y"

    char buffer[1000]; // Define buffer here

#line 204 "sql.tab.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   105

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    98,   101,   101,   101,   101,   105,   118,
     121,   124,   124,   124,   124,   142,   142,   142,   142,   142,
     144,   147,   151,   152,   154,   155,   156,   157,   158,   159,
     162,   162,   164,   166,   168,   170,   170,   172,   172,   172,
     172,   172,   172,   174,   174,   176,   178,   180,   182,   184,
     184,   186,   186,   192,   192,   194,   202,   202,   203
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CREATETK", "SELECTTK",
  "DELETETK", "TABLETK", "FROMTK", "WHERETK", "UPDATETK", "SETTK", "REFTK",
  "FOREIGNTK", "PRIMARYTK", "TYPEWITHOUTTK", "TYPEWITHTK", "IDTK", "OPTK",
  "NBTK", "PARENTOUV", "PARENTFERM", "VIRGULE", "POINTVIR", "STRINGTK",
  "INTK", "ANDTK", "NOTINTK", "LIKETK", "ORTK", "NOTTK", "ASTERIK",
  "NOTNULLTK", "UNIQUETK", "CHECKTK", "DEFAULTTK", "$accept", "query",
  "diff_query", "create_query", "update_query", "delete_query",
  "select_query", "$@1", "$@2", "constraint_after_col", "mult_id",
  "column_list", "column_def", "list_set_statement",
  "list_statement_where_opt", "list_statement_where", "list_condition",
  "condition", "like_statement", "or_statement", "not_statement",
  "simple_condition", "not_in_statement", "in_statement", "strings",
  "numbers", "set_statement", "values", "END", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      41,     2,   -13,    27,    22,    49,    40,   -64,   -64,   -64,
     -64,    35,   -64,    56,    -2,    48,    55,   -64,   -64,    41,
      47,    51,   -64,    52,    61,    54,   -64,    24,     3,    51,
     -64,    -4,   -64,   -64,    57,     5,   -64,    53,    58,     1,
      59,    50,   -64,    60,    15,    62,    63,    45,   -64,   -64,
     -64,   -64,   -64,   -64,   -14,    54,   -64,    64,    66,   -11,
      65,   -64,    24,    61,   -14,    67,    68,    69,    16,    -4,
      -4,   -64,   -64,   -64,   -64,    70,    71,   -64,   -64,   -64,
      74,   -14,   -64,    76,   -64,   -64,   -64,    29,    72,   -64,
     -14,    73,    45,   -64,    78,   -64,    -4,   -64,    77,   -64,
     -64,    34,    36,    38,   -64,   -64,    82,    28,    -3,   -64,
      79,   -64,    81,   -64,    84,   -64,   -64,   -64,   -64,   -64,
      85,    80,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     6,     4,     5,
       7,     0,    21,     0,     0,     0,     0,     1,    58,     2,
       0,     0,    12,     0,    32,     0,     3,     0,    32,     0,
      20,     0,    10,    33,     0,    32,    30,     0,     0,     0,
       0,    23,    11,    13,     0,     0,    34,    35,    39,    40,
      41,    42,    38,    37,     0,     0,     9,     0,     0,    19,
       0,     8,     0,    32,     0,     0,     0,     0,     0,     0,
       0,    57,    56,    55,    31,     0,     0,    27,    18,    17,
       0,     0,    24,     0,    22,    14,    47,     0,     0,    43,
       0,     0,    36,    45,     0,    28,     0,    15,     0,    53,
      51,     0,     0,     0,    46,    44,     0,     0,    19,    49,
       0,    50,     0,    48,     0,    16,    26,    25,    52,    54,
       0,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,    86,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -33,
     -15,    14,   -64,   -64,   -28,   -64,     8,    -9,   -64,   -64,
     -64,   -64,   -64,   -64,    -5,   -64,    30,   -63,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    10,    29,    63,    82,
      14,    40,    41,    35,    32,    33,    46,    47,    48,    49,
      50,    51,    52,    53,   101,   102,    36,    73,    19
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    86,    77,    12,    71,    22,    28,    56,    11,    72,
     116,    31,    44,    31,    43,    59,    60,    13,    97,    23,
      78,    79,    80,    81,    23,    45,    55,   104,    78,    79,
      80,    81,    64,    90,    15,    85,    37,    38,    16,    65,
      39,    66,    67,    91,     1,     2,     3,    99,   115,    17,
       4,    20,   100,    69,   109,   110,   111,   112,   113,   110,
      92,    93,    18,    21,    24,    25,    27,    12,    30,    31,
      34,    62,    57,    70,    54,   117,    84,    58,    68,    61,
      75,    23,    76,   103,    83,    74,    87,    88,    69,   106,
      94,    95,    89,    96,    98,   100,   105,   108,   114,   119,
     122,   121,   118,   120,   107,    26
};

static const yytype_int8 yycheck[] =
{
      28,    64,    13,    16,    18,     7,    21,    35,     6,    23,
      13,     8,    16,     8,    29,    14,    15,    30,    81,    21,
      31,    32,    33,    34,    21,    29,    21,    90,    31,    32,
      33,    34,    17,    17,     7,    63,    12,    13,    16,    24,
      16,    26,    27,    27,     3,     4,     5,    18,    20,     0,
       9,    16,    23,    25,    20,    21,    20,    21,    20,    21,
      69,    70,    22,     7,    16,    10,    19,    16,    16,     8,
      16,    21,    19,    28,    17,   108,    62,    19,    16,    20,
      16,    21,    16,    88,    19,    55,    19,    19,    25,    11,
      20,    20,    23,    19,    18,    23,    23,    20,    16,    18,
      20,    16,    23,    19,    96,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    36,    37,    38,    39,    40,
      41,     6,    16,    30,    45,     7,    16,     0,    22,    63,
      16,     7,     7,    21,    16,    10,    36,    19,    45,    42,
      16,     8,    49,    50,    16,    48,    61,    12,    13,    16,
      46,    47,    49,    45,    16,    29,    51,    52,    53,    54,
      55,    56,    57,    58,    17,    21,    49,    19,    19,    14,
      15,    20,    21,    43,    17,    24,    26,    27,    16,    25,
      28,    18,    23,    62,    61,    16,    16,    13,    31,    32,
      33,    34,    44,    19,    46,    49,    62,    19,    19,    23,
      17,    27,    52,    52,    20,    20,    19,    62,    18,    18,
      23,    59,    60,    59,    62,    23,    11,    51,    20,    20,
      21,    20,    21,    20,    16,    20,    13,    44,    23,    18,
      19,    16,    20
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    38,    39,
      40,    41,    42,    43,    41,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    47,    47,    47,    47,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    52,    52,    52,
      52,    52,    52,    53,    53,    54,    55,    56,    57,    58,
      58,    59,    59,    60,    60,    61,    62,    62,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     6,     5,
       4,     5,     0,     0,     7,     2,     4,     1,     1,     0,
       3,     1,     3,     1,     3,     6,     6,     3,     4,     9,
       1,     3,     0,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     4,     3,     5,     5,
       5,     1,     3,     1,     3,     3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* query: diff_query END  */
#line 80 "sql.y"
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
#line 1250 "sql.tab.c"
    break;

  case 4: /* diff_query: update_query  */
#line 101 "sql.y"
                         {updateOrDelete=1;}
#line 1256 "sql.tab.c"
    break;

  case 5: /* diff_query: delete_query  */
#line 101 "sql.y"
                                                           {updateOrDelete=2;}
#line 1262 "sql.tab.c"
    break;

  case 7: /* diff_query: select_query  */
#line 101 "sql.y"
                                                                                                            { 
      strcat(buffer, "Select query accepted\n");
    printf("Select query accepted\n");}
#line 1270 "sql.tab.c"
    break;

  case 8: /* create_query: CREATETK TABLETK IDTK PARENTOUV column_list PARENTFERM  */
#line 105 "sql.y"
                                                                     {

    if(nb_primary>1){
        strcat(buffer, "error : you specify than one primary key ❗❌🚨");
        yyerror( "error : you specify than one primary key");
         gtk_label_set_text(GTK_LABEL(result_label), buffer);
    }
    
    
   
    printf("nb of primary key used :%d",nb_primary);
}
#line 1287 "sql.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 124 "sql.y"
                                                                                              {jointure=TRUE ;}
#line 1293 "sql.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 124 "sql.y"
                                                                                                                        {jointure=FALSE ;}
#line 1299 "sql.tab.c"
    break;

  case 14: /* select_query: SELECTTK mult_id FROMTK $@1 mult_id $@2 list_statement_where_opt  */
#line 124 "sql.y"
                                                                                                                                                                    {
    
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
#line 1321 "sql.tab.c"
    break;

  case 20: /* mult_id: mult_id VIRGULE IDTK  */
#line 144 "sql.y"
                               {
    if(jointure)nb_tables_selected ++ ;
    if(!jointure)nb_champs++; 
}
#line 1330 "sql.tab.c"
    break;

  case 26: /* column_def: IDTK TYPEWITHTK PARENTOUV NBTK PARENTFERM PRIMARYTK  */
#line 156 "sql.y"
                                                                {nb_primary++;}
#line 1336 "sql.tab.c"
    break;

  case 27: /* column_def: IDTK TYPEWITHOUTTK PRIMARYTK  */
#line 157 "sql.y"
                                         {nb_primary++;}
#line 1342 "sql.tab.c"
    break;

  case 32: /* list_statement_where_opt: %empty  */
#line 164 "sql.y"
                                       {
    whereNotUsed=TRUE;
}
#line 1350 "sql.tab.c"
    break;

  case 55: /* set_statement: IDTK OPTK values  */
#line 194 "sql.y"
                                {
        if (yylval.op == 1) {
            printf("Operator is equal\n");
        } else {
            printf("Operator is not equal\n");
        }
}
#line 1362 "sql.tab.c"
    break;

  case 58: /* END: POINTVIR  */
#line 203 "sql.y"
               { yyaccept("correct \n"); printf("> ");}
#line 1368 "sql.tab.c"
    break;


#line 1372 "sql.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 204 "sql.y"


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
