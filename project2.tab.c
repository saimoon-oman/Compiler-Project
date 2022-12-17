
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "project2.y"

  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  #include<math.h>
  void yyerror(char *s);
  extern int yylex();
  extern int yyparse();
  
  typedef struct {
    char *name;
    char *data_type;
    int ival;
    float fval;
  }value;
  value symbol_table[200];

  int index=0, if_check=0, sw = 0, check = 0;
  int find_symbol_table_index(char *var);
  void assignment(char *name, int ival, float fval, char *type);


/* Line 189 of yacc.c  */
#line 96 "project2.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     VOID = 261,
     PLUS = 262,
     MINUS = 263,
     MUL = 264,
     DIV = 265,
     MOD = 266,
     POW = 267,
     GT = 268,
     LT = 269,
     GTE = 270,
     LTE = 271,
     EQUAL = 272,
     LOGICALAND = 273,
     LOGICALOR = 274,
     ASSIGN = 275,
     LPAR = 276,
     RPAR = 277,
     LBRA = 278,
     RBRA = 279,
     SEMICOLON = 280,
     COMMA = 281,
     COLON = 282,
     FOR = 283,
     WHILE = 284,
     BACK = 285,
     OUT = 286,
     IN = 287,
     CONTINUE = 288,
     BREAK = 289,
     STRUCT = 290,
     SIZEOF = 291,
     IF = 292,
     ELSEIF = 293,
     ELSE = 294,
     INCREMENT = 295,
     DECREMENT = 296,
     SWITCH = 297,
     CASE = 298,
     DEFAULT = 299,
     INTVAL = 300,
     REALVAL = 301,
     VAR = 302,
     OUTPUTTEXT = 303,
     NOTEQUAL = 304,
     BITWISEAND = 305,
     BITWISEXOR = 306,
     BITWISEOR = 307,
     LIB = 308,
     MIN = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "project2.y"

  struct abc {
    int ival;
    float fval;
    char *str;
    char *type;
  }uni_var;



/* Line 214 of yacc.c  */
#line 197 "project2.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "project2.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    43,
      47,    49,    50,    53,    58,    62,    65,    70,    72,    80,
      88,    93,    95,    97,   101,   103,   107,   110,   113,   115,
     117,   120,   122,   124,   126,   133,   137,   141,   145,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   210,   215,   220,   223,   226,   233,
     241,   245,   252
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    -1,    56,    57,    -1,    63,    -1,    69,
      -1,    73,    -1,    74,    -1,    76,    -1,    78,    -1,    79,
      -1,    58,    -1,    59,    -1,    62,    -1,    71,    -1,    64,
      -1,    65,    -1,    53,    -1,    68,    47,    23,    60,    24,
      21,    75,    -1,    60,    26,    61,    -1,    61,    -1,    -1,
      68,    70,    -1,    47,    23,    69,    24,    -1,    47,    23,
      24,    -1,    68,    69,    -1,    42,    23,    72,    24,    -1,
      66,    -1,    43,    72,    27,    23,    57,    24,    66,    -1,
      43,    72,    27,    23,    57,    24,    67,    -1,    44,    23,
      57,    24,    -1,     3,    -1,     4,    -1,    69,    26,    70,
      -1,    70,    -1,    47,    20,    72,    -1,    47,    40,    -1,
      47,    41,    -1,    47,    -1,    30,    -1,    30,    72,    -1,
      45,    -1,    46,    -1,    47,    -1,    54,    23,    47,    26,
      47,    24,    -1,    72,    19,    72,    -1,    72,    18,    72,
      -1,    72,    51,    72,    -1,    72,    50,    72,    -1,    72,
      52,    72,    -1,    72,    17,    72,    -1,    72,    49,    72,
      -1,    72,    14,    72,    -1,    72,    16,    72,    -1,    72,
      13,    72,    -1,    72,    15,    72,    -1,    72,     7,    72,
      -1,    72,     8,    72,    -1,    72,     9,    72,    -1,    72,
      10,    72,    -1,    72,    11,    72,    -1,    72,    12,    72,
      -1,    23,    72,    24,    -1,    31,    23,    72,    24,    -1,
      31,    23,    48,    24,    -1,    32,    23,    47,    24,    -1,
      57,    75,    -1,    57,    22,    -1,    37,    23,    72,    24,
      21,    75,    -1,    37,    23,    72,    24,    21,    75,    77,
      -1,    39,    21,    75,    -1,    29,    23,    72,    24,    21,
      75,    -1,    28,    23,    70,    27,    72,    27,    70,    24,
      21,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    65,    69,    82,
      83,    86,    87,    91,    92,    96,   100,   108,   118,   126,
     136,   141,   142,   146,   147,   151,   152,   159,   166,   170,
     171,   175,   176,   177,   187,   211,   217,   223,   229,   235,
     241,   253,   265,   277,   289,   301,   313,   314,   315,   316,
     321,   322,   323,   327,   331,   337,   355,   356,   360,   371,
     385,   389,   398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "VOID", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "POW", "GT", "LT", "GTE", "LTE", "EQUAL",
  "LOGICALAND", "LOGICALOR", "ASSIGN", "LPAR", "RPAR", "LBRA", "RBRA",
  "SEMICOLON", "COMMA", "COLON", "FOR", "WHILE", "BACK", "OUT", "IN",
  "CONTINUE", "BREAK", "STRUCT", "SIZEOF", "IF", "ELSEIF", "ELSE",
  "INCREMENT", "DECREMENT", "SWITCH", "CASE", "DEFAULT", "INTVAL",
  "REALVAL", "VAR", "OUTPUTTEXT", "NOTEQUAL", "BITWISEAND", "BITWISEXOR",
  "BITWISEOR", "LIB", "MIN", "$accept", "program", "statement", "library",
  "function", "params", "declaration_for_function", "function_call",
  "declaration", "switch", "case", "cases", "default_function", "TYPE",
  "expression1", "expression", "ret", "assignval", "print", "in", "block",
  "if", "else", "while", "for", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    59,    60,
      60,    61,    61,    62,    62,    63,    64,    65,    66,    66,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    75,    75,    76,    76,
      77,    78,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     3,
       1,     0,     2,     4,     3,     2,     4,     1,     7,     7,
       4,     1,     1,     3,     1,     3,     2,     2,     1,     1,
       2,     1,     1,     1,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     2,     2,     6,     7,
       3,     6,    10
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    31,    32,     0,     0,    39,     0,     0,
       0,     0,     0,    38,    17,     3,    11,    12,    13,     4,
      15,    16,    27,     0,     5,    34,    14,     6,     7,     8,
       9,    10,     0,     0,     0,    41,    42,    43,     0,    40,
       0,     0,     0,     0,     0,     0,     0,    36,    37,    38,
      25,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    24,     0,    21,    33,     0,     0,    62,     0,    56,
      57,    58,    59,    60,    61,    54,    52,    55,    53,    50,
      46,    45,    51,    48,    47,    49,    64,    63,    65,     0,
      26,     0,    23,     0,    20,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,    71,     0,    68,     0,
       0,    19,     0,    67,    66,    44,     0,    69,     0,    28,
      29,    18,     0,     0,     0,     0,    70,     0,    72,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   125,    16,    17,   113,   114,    18,    19,    20,
      21,    22,   140,    23,    24,    25,    26,    39,    27,    28,
     126,    29,   137,    30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -47
static const yytype_int16 yypact[] =
{
     -47,    36,   -47,   -47,   -47,     3,     8,   145,    11,    19,
      48,    49,   145,   101,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -33,    51,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,    27,   145,   145,   -47,   -47,   -47,    58,   308,
      69,    35,   145,   145,   144,   145,    -9,   -47,   -47,   125,
      51,    27,    91,   -11,   165,   194,    38,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,    63,   212,    75,   241,   259,    67,
     308,   -47,    -7,    18,   -47,   145,    81,   -47,    79,    -6,
      -6,   316,   316,   316,   327,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   -47,   -47,   -47,    86,
     -47,    97,   -47,     1,   -47,    27,   287,    97,    65,    97,
      94,    99,    18,   -47,    27,    66,   -47,    98,    96,   -15,
      97,   -47,   106,   -47,   -47,   -47,   112,   -47,   113,   -47,
     -47,   -47,   116,    97,    97,    97,   -47,   114,   -47,   -47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,    -1,   -47,   -47,   -47,    24,   -47,   -47,   -47,
     -47,    20,   -47,   -46,    -5,   -31,   -47,   -10,   -47,   -47,
     -39,   -47,   -47,   -47,   -47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      15,    53,    44,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    49,    81,    85,   112,    50,    51,
      84,     3,     4,    54,    55,   121,    32,   122,    12,   138,
      75,    33,    77,    78,    40,    80,     2,   115,    52,     3,
       4,    82,    41,    70,    71,    72,    73,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     5,     6,     7,     8,     9,     3,
       4,    42,    43,    10,    52,   116,   115,    51,    11,    12,
     128,    56,    76,    13,   123,    88,   134,   106,   133,    14,
     111,   141,    34,   132,     5,     6,     7,     8,     9,   108,
       3,     4,   117,    10,   146,   118,   148,   119,    11,    12,
     120,    45,   127,    13,    35,    36,    37,    74,   129,    14,
     130,    45,   135,    38,    46,     5,     6,     7,     8,     9,
     142,    47,    48,   143,    10,   136,   144,   145,   149,    11,
      12,    47,    48,   147,    13,    45,   131,     0,    83,   139,
      14,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,    47,    48,     0,    34,     0,
       0,    79,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,     0,     0,    86,
      35,    36,    37,    70,    71,    72,    73,     0,     0,    38,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    87,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   109,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,     0,    70,    71,
      72,    73,     0,     0,   124,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      63,    64,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,     0,     0,     0,     0,    70,    71,    72,    73,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
       1,    32,    12,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    47,    24,    27,    24,    23,    26,
      51,     3,     4,    33,    34,    24,    23,    26,    43,    44,
      40,    23,    42,    43,    23,    45,     0,    83,    47,     3,
       4,    46,    23,    49,    50,    51,    52,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    28,    29,    30,    31,    32,     3,
       4,    23,    23,    37,    47,    85,   122,    26,    42,    43,
     119,    23,    47,    47,   115,    47,   125,    24,    22,    53,
      23,   130,    23,   124,    28,    29,    30,    31,    32,    24,
       3,     4,    21,    37,   143,    26,   145,    21,    42,    43,
     111,    20,    47,    47,    45,    46,    47,    48,    24,    53,
      21,    20,    24,    54,    23,    28,    29,    30,    31,    32,
      24,    40,    41,    21,    37,    39,    23,    21,    24,    42,
      43,    40,    41,   144,    47,    20,   122,    -1,    23,   129,
      53,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    40,    41,    -1,    23,    -1,
      -1,    27,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      45,    46,    47,    49,    50,    51,    52,    -1,    -1,    54,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    49,    50,    51,    52,    24,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    49,    50,    51,    52,    24,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    49,    50,
      51,    52,    -1,    -1,    27,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    12,    13,
      14,    15,    16,    17,    18,    19,    49,    50,    51,    52,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,     0,     3,     4,    28,    29,    30,    31,    32,
      37,    42,    43,    47,    53,    57,    58,    59,    62,    63,
      64,    65,    66,    68,    69,    70,    71,    73,    74,    76,
      78,    79,    23,    23,    23,    45,    46,    47,    54,    72,
      23,    23,    23,    23,    72,    20,    23,    40,    41,    47,
      69,    26,    47,    70,    72,    72,    23,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      49,    50,    51,    52,    48,    72,    47,    72,    72,    27,
      72,    24,    69,    23,    70,    27,    24,    24,    47,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    24,    24,    24,    24,
      24,    23,    24,    60,    61,    68,    72,    21,    26,    21,
      57,    24,    26,    70,    27,    57,    75,    47,    75,    24,
      21,    61,    70,    22,    75,    24,    39,    77,    44,    66,
      67,    75,    24,    21,    23,    21,    75,    57,    75,    24
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 17:

/* Line 1455 of yacc.c  */
#line 65 "project2.y"
    {printf("%s is detected.\n", (yyvsp[(1) - (1)].uni_var).str);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 69 "project2.y"
    {
      if(strcmp((yyvsp[(2) - (7)].uni_var).str, "main") == 0)
      {
          printf("Main function.\n");
      }
      else
      {
          printf("User defined function.\n");
      }
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 83 "project2.y"
    {printf("Function declared\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 100 "project2.y"
    {
        sw = (yyvsp[(3) - (4)].uni_var).ival;
        check = 0;
        printf("switch statement.\n");
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 109 "project2.y"
    {
        if(check == 0)
        {
            printf("default\n");
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "project2.y"
    {
        if(sw==(yyvsp[(2) - (7)].uni_var).ival)
        {
            printf("%d\n",(yyvsp[(2) - (7)].uni_var).ival);
            check = 1;
        }

    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 "project2.y"
    {
        
        if(sw==(yyvsp[(2) - (7)].uni_var).ival)
        {
            printf("%d\n",(yyvsp[(2) - (7)].uni_var).ival);
            check = 1;
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 136 "project2.y"
    {
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 151 "project2.y"
    {assignment((yyvsp[(1) - (3)].uni_var).str, (yyvsp[(3) - (3)].uni_var).ival, (yyvsp[(3) - (3)].uni_var).fval, (yyvsp[(3) - (3)].uni_var).type); (yyval.uni_var).str = (yyvsp[(1) - (3)].uni_var).str; (yyval.uni_var).ival = (yyvsp[(3) - (3)].uni_var).ival; (yyval.uni_var).fval = (yyvsp[(3) - (3)].uni_var).fval; (yyval.uni_var).type = (yyvsp[(3) - (3)].uni_var).type;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 152 "project2.y"
    {
            int i = find_symbol_table_index((yyvsp[(1) - (2)].uni_var).str);
            if (i != index) {
              symbol_table[i].ival = symbol_table[i].ival + 1;
              symbol_table[i].fval = symbol_table[i].fval + 1.0;
            }
          ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 159 "project2.y"
    {
            int i = find_symbol_table_index((yyvsp[(1) - (2)].uni_var).str);
            if (i != index) {
              symbol_table[i].ival = symbol_table[i].ival - 1;
              symbol_table[i].fval = symbol_table[i].fval - 1.0;
            }
          ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 166 "project2.y"
    {assignment((yyvsp[(1) - (1)].uni_var).str, 0, 0.0, "int");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 171 "project2.y"
    {printf("Return %d from function\n", (yyvsp[(2) - (2)].uni_var).ival);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 175 "project2.y"
    {(yyval.uni_var).ival = (yyvsp[(1) - (1)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (1)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (1)].uni_var).type;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 176 "project2.y"
    {(yyval.uni_var).ival = (yyvsp[(1) - (1)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (1)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (1)].uni_var).type;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 177 "project2.y"
    {
            int i = 0;
            for (i = 0; i < index; i++) {
              if (strcmp((yyvsp[(1) - (1)].uni_var).str, symbol_table[i].name) == 0) {
                (yyval.uni_var).ival = symbol_table[i].ival, (yyval.uni_var).fval = symbol_table[i].fval, (yyval.uni_var).type = symbol_table[i].data_type;
                break;
              }
            }
            // if (i == index) printf("NOT FOUND\n");
          ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 187 "project2.y"
    {
            if (strcmp((yyvsp[(3) - (6)].uni_var).type, "int") == 0) {
              int i = find_symbol_table_index("min");
              symbol_table[i].name = "min";
              symbol_table[i].data_type = "int";
              symbol_table[i].ival = (yyvsp[(3) - (6)].uni_var).ival < (yyvsp[(5) - (6)].uni_var).ival ? (yyvsp[(3) - (6)].uni_var).ival : (yyvsp[(5) - (6)].uni_var).ival;
              symbol_table[i].fval = (yyvsp[(3) - (6)].uni_var).fval < (yyvsp[(5) - (6)].uni_var).fval ? (yyvsp[(3) - (6)].uni_var).fval : (yyvsp[(5) - (6)].uni_var).fval;
              if (i == index) index++;
              (yyval.uni_var).ival = symbol_table[i].ival;
              (yyval.uni_var).fval = symbol_table[i].fval;
              (yyval.uni_var).type = symbol_table[i].data_type;
            }
            else if (strcmp((yyvsp[(3) - (6)].uni_var).type, "float") == 0) {
              int i = find_symbol_table_index("min");
              symbol_table[i].name = "min";
              symbol_table[i].data_type = "float";
              symbol_table[i].ival = (yyvsp[(3) - (6)].uni_var).ival < (yyvsp[(5) - (6)].uni_var).ival ? (yyvsp[(3) - (6)].uni_var).ival : (yyvsp[(5) - (6)].uni_var).ival;
              symbol_table[i].fval = (yyvsp[(3) - (6)].uni_var).fval < (yyvsp[(5) - (6)].uni_var).fval ? (yyvsp[(3) - (6)].uni_var).fval : (yyvsp[(5) - (6)].uni_var).fval;
              if (i == index) index++;
              (yyval.uni_var).ival = symbol_table[i].ival;
              (yyval.uni_var).fval = symbol_table[i].fval;
              (yyval.uni_var).type = symbol_table[i].data_type;
            }
          ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 211 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = ((yyvsp[(1) - (3)].uni_var).ival || (yyvsp[(3) - (3)].uni_var).ival);
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 217 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = ((yyvsp[(1) - (3)].uni_var).ival && (yyvsp[(3) - (3)].uni_var).ival);
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 223 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival ^ (yyvsp[(3) - (3)].uni_var).ival;
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 229 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival & (yyvsp[(3) - (3)].uni_var).ival;
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 235 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival | (yyvsp[(3) - (3)].uni_var).ival;
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 241 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              if ((yyvsp[(1) - (3)].uni_var).ival == (yyvsp[(3) - (3)].uni_var).ival) (yyval.uni_var).ival = 1, (yyval.uni_var).fval = 1.0;
              else (yyval.uni_var).ival = 0, (yyval.uni_var).fval = 0.0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0) {
              if ((yyvsp[(1) - (3)].uni_var).fval == (yyvsp[(3) - (3)].uni_var).fval) (yyval.uni_var).fval = 1.0, (yyval.uni_var).ival = 1;
              else (yyval.uni_var).fval = 0.0, (yyval.uni_var).ival = 0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 253 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              if ((yyvsp[(1) - (3)].uni_var).ival != (yyvsp[(3) - (3)].uni_var).ival) (yyval.uni_var).ival = 1, (yyval.uni_var).fval = 1.0;
              else (yyval.uni_var).ival = 0, (yyval.uni_var).fval = 0.0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0) {
              if ((yyvsp[(1) - (3)].uni_var).fval != (yyvsp[(3) - (3)].uni_var).fval) (yyval.uni_var).fval = 1.0, (yyval.uni_var).ival = 1;
              else (yyval.uni_var).fval = 0.0, (yyval.uni_var).ival = 0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 265 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              if ((yyvsp[(1) - (3)].uni_var).ival < (yyvsp[(3) - (3)].uni_var).ival) (yyval.uni_var).ival = 1, (yyval.uni_var).fval = 1.0;
              else (yyval.uni_var).ival = 0, (yyval.uni_var).fval = 0.0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0) {
              if ((yyvsp[(1) - (3)].uni_var).fval < (yyvsp[(3) - (3)].uni_var).fval) (yyval.uni_var).fval = 1.0, (yyval.uni_var).ival = 1;
              else (yyval.uni_var).fval = 0.0, (yyval.uni_var).ival = 0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 277 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              if ((yyvsp[(1) - (3)].uni_var).ival <= (yyvsp[(3) - (3)].uni_var).ival) (yyval.uni_var).ival = 1, (yyval.uni_var).fval = 1.0;
              else (yyval.uni_var).ival = 0, (yyval.uni_var).fval = 0.0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0) {
              if ((yyvsp[(1) - (3)].uni_var).fval <= (yyvsp[(3) - (3)].uni_var).fval) (yyval.uni_var).fval = 1.0, (yyval.uni_var).ival = 1;
              else (yyval.uni_var).fval = 0.0, (yyval.uni_var).ival = 0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 289 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              if ((yyvsp[(1) - (3)].uni_var).ival > (yyvsp[(3) - (3)].uni_var).ival) (yyval.uni_var).ival = 1, (yyval.uni_var).fval = 1.0;
              else (yyval.uni_var).ival = 0, (yyval.uni_var).fval = 0.0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0) {
              if ((yyvsp[(1) - (3)].uni_var).fval > (yyvsp[(3) - (3)].uni_var).fval) (yyval.uni_var).fval = 1.0, (yyval.uni_var).ival = 1;
              else (yyval.uni_var).fval = 0.0, (yyval.uni_var).ival = 0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 301 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              if ((yyvsp[(1) - (3)].uni_var).ival >= (yyvsp[(3) - (3)].uni_var).ival) (yyval.uni_var).ival = 1, (yyval.uni_var).fval = 1.0;
              else (yyval.uni_var).ival = 0, (yyval.uni_var).fval = 0.0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0) {
              if ((yyvsp[(1) - (3)].uni_var).fval >= (yyvsp[(3) - (3)].uni_var).fval) (yyval.uni_var).fval = 1.0, (yyval.uni_var).ival = 1;
              else (yyval.uni_var).fval = 0.0, (yyval.uni_var).ival = 0;
              (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 313 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival + (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval + (yyvsp[(3) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 314 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival - (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval - (yyvsp[(3) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 315 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival * (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval * (yyvsp[(3) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 316 "project2.y"
    { 
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int") == 0 && (yyvsp[(3) - (3)].uni_var).ival != 0) (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival / (yyvsp[(3) - (3)].uni_var).ival;
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0 && (yyvsp[(3) - (3)].uni_var).fval != 0.0) (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval / (yyvsp[(3) - (3)].uni_var).fval;
            (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
          ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 321 "project2.y"
    {(yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival % (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 322 "project2.y"
    { (yyval.uni_var).ival = pow((yyvsp[(1) - (3)].uni_var).ival, (yyvsp[(3) - (3)].uni_var).ival), (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 323 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(2) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(2) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(2) - (3)].uni_var).type;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 327 "project2.y"
    {
        if (strcmp((yyvsp[(3) - (4)].uni_var).type, "int") == 0) printf("%d\n", (yyvsp[(3) - (4)].uni_var).ival);
        else if (strcmp((yyvsp[(3) - (4)].uni_var).type, "float") == 0) printf("%.2lf\n", (yyvsp[(3) - (4)].uni_var).fval);
      ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 331 "project2.y"
    {
        printf("%s\n", (yyvsp[(3) - (4)].uni_var).str);
      ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 337 "project2.y"
    {
      int i = find_symbol_table_index((yyvsp[(3) - (4)].uni_var).str);
      if (i != index) {
        printf("Enter value for %s := ", symbol_table[i].name);
        if (strcmp(symbol_table[i].data_type, "int") == 0) {
          scanf("%d", &symbol_table[i].ival);
        }
        else if (strcmp(symbol_table[i].data_type, "float") == 0) {
          scanf("%f", &symbol_table[i].fval);
        }
      }
      else {
        printf("Variable not declared\n");
      }
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 356 "project2.y"
    {(yyval.uni_var).ival=(yyvsp[(1) - (2)].uni_var).ival;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 360 "project2.y"
    {
      if((yyvsp[(3) - (6)].uni_var).ival)
      {
          if_check=1;
          printf("If statement will be executed.\n");
      }
      if(if_check!=1)
      {
          printf("Else statement will be executed.\n");
      }
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 371 "project2.y"
    {
      if((yyvsp[(3) - (7)].uni_var).ival)
      {  
          if_check=1;
          printf("If statement will be executed.\n");
      }
      if(if_check!=1)
      {
          printf("Else statement will be executed.\n");
      }
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 385 "project2.y"
    {;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 389 "project2.y"
    {
      if((yyvsp[(3) - (6)].uni_var).ival)
      {
          printf("Inside while loop\n");
      }
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 398 "project2.y"
    {
      if ((yyvsp[(5) - (10)].uni_var).ival) {
        printf("This is a for loop.\n");
      }
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2108 "project2.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 405 "project2.y"



void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int yywrap()
{
return 1;
}

int find_symbol_table_index(char *var)
{
  int i;
  for (i = 0; i < index; i++) {
    if (strcmp(symbol_table[i].name, var) == 0) return i;
  }
  return index;
}

void assignment(char *name, int ival, float fval, char *type)
{
  int i = find_symbol_table_index(name);
  symbol_table[i].data_type = type;
  symbol_table[i].name = name;
  symbol_table[i].ival = ival;
  symbol_table[i].fval = fval;
  if (i == index) index++;
}

int main(void)
{   
  yyparse();
  printf("%s %s : %d\n",symbol_table[0].data_type, symbol_table[0].name, symbol_table[0].ival);
  printf("%s %s : %d\n",symbol_table[1].data_type, symbol_table[1].name, symbol_table[1].ival);
  
}

