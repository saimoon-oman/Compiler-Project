
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

  int index=0, if_check=0;
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
#define YYLAST   318

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  131

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
      19,    21,    23,    25,    27,    29,    31,    39,    43,    45,
      46,    49,    54,    58,    61,    63,    65,    69,    71,    75,
      78,    81,    83,    85,    88,    90,    92,    94,   101,   105,
     109,   113,   117,   121,   125,   129,   133,   137,   141,   145,
     149,   153,   157,   161,   165,   169,   173,   178,   183,   188,
     191,   194,   201,   209,   213,   220
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    -1,    56,    57,    -1,    63,    -1,    65,
      -1,    69,    -1,    70,    -1,    72,    -1,    74,    -1,    75,
      -1,    58,    -1,    59,    -1,    62,    -1,    67,    -1,    53,
      -1,    64,    47,    23,    60,    24,    21,    71,    -1,    60,
      26,    61,    -1,    61,    -1,    -1,    64,    66,    -1,    47,
      23,    65,    24,    -1,    47,    23,    24,    -1,    64,    65,
      -1,     3,    -1,     4,    -1,    65,    26,    66,    -1,    66,
      -1,    47,    20,    68,    -1,    47,    40,    -1,    47,    41,
      -1,    47,    -1,    30,    -1,    30,    68,    -1,    45,    -1,
      46,    -1,    47,    -1,    54,    23,    47,    26,    47,    24,
      -1,    68,    19,    68,    -1,    68,    18,    68,    -1,    68,
      51,    68,    -1,    68,    50,    68,    -1,    68,    52,    68,
      -1,    68,    17,    68,    -1,    68,    49,    68,    -1,    68,
      14,    68,    -1,    68,    16,    68,    -1,    68,    13,    68,
      -1,    68,    15,    68,    -1,    68,     7,    68,    -1,    68,
       8,    68,    -1,    68,     9,    68,    -1,    68,    10,    68,
      -1,    68,    11,    68,    -1,    68,    12,    68,    -1,    23,
      68,    24,    -1,    31,    23,    68,    24,    -1,    31,    23,
      48,    24,    -1,    32,    23,    47,    24,    -1,    57,    71,
      -1,    57,    22,    -1,    37,    23,    68,    24,    21,    71,
      -1,    37,    23,    68,    24,    21,    71,    73,    -1,    39,
      21,    71,    -1,    29,    23,    68,    24,    21,    71,    -1,
      28,    23,    66,    27,    68,    27,    66,    24,    21,    71,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    63,    67,    80,    81,    84,
      85,    89,    90,    94,    98,    99,   103,   104,   108,   109,
     116,   123,   127,   128,   132,   133,   134,   144,   168,   174,
     180,   186,   192,   198,   210,   222,   234,   246,   258,   270,
     271,   272,   273,   278,   279,   280,   284,   288,   294,   312,
     313,   317,   328,   342,   346,   355
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
  "declaration", "TYPE", "expression1", "expression", "ret", "assignval",
  "print", "in", "block", "if", "else", "while", "for", 0
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
      57,    57,    57,    57,    57,    58,    59,    60,    60,    61,
      61,    62,    62,    63,    64,    64,    65,    65,    66,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    70,    71,
      71,    72,    72,    73,    74,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     3,     1,     0,
       2,     4,     3,     2,     1,     1,     3,     1,     3,     2,
       2,     1,     1,     2,     1,     1,     1,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     2,
       2,     6,     7,     3,     6,    10
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    24,    25,     0,     0,    32,     0,     0,
       0,    31,    15,     3,    11,    12,    13,     4,     0,     5,
      27,    14,     6,     7,     8,     9,    10,     0,     0,     0,
      34,    35,    36,     0,    33,     0,     0,     0,     0,     0,
      29,    30,    31,    23,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    22,     0,    19,    26,     0,     0,    55,     0,
      49,    50,    51,    52,    53,    54,    47,    45,    48,    46,
      43,    39,    38,    44,    41,    40,    42,    57,    56,    58,
       0,    21,     0,    18,     0,     0,     0,     0,     0,     0,
      19,    20,     0,     0,    64,     0,    61,     0,    17,     0,
      60,    59,    37,     0,    62,    16,     0,     0,     0,    63,
      65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,   113,    14,    15,   102,   103,    16,    17,    18,
      19,    20,    21,    34,    22,    23,   114,    24,   124,    25,
      26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
     -72,     1,   -72,   -72,   -72,   -21,    -9,   259,    28,    29,
      30,   -14,   -72,   -72,   -72,   -72,   -72,   -72,    13,    35,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,    15,   259,   259,
     -72,   -72,   -72,    41,   237,   122,    19,   259,   259,   -12,
     -72,   -72,    27,    35,    15,    43,    48,   123,   141,    22,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,    52,   170,    54,
     188,   237,   -72,   -16,    33,   -72,   259,    59,   -72,    60,
     260,   260,     6,     6,     6,   244,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   -72,   -72,   -72,
      66,   -72,   -13,   -72,    15,   216,    42,    45,    42,    72,
      33,   -72,    15,    12,   -72,    70,    57,    42,   -72,    73,
     -72,   -72,   -72,    77,   -72,   -72,    78,    42,    42,   -72,
     -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,    99,   -72,   -72,   -72,    -8,   -72,   -72,   -71,
     -11,   -27,   -72,    53,   -72,   -72,   190,   -72,   -72,   -72,
     -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,     2,    27,   104,     3,     4,    38,    43,   101,    39,
      44,   109,    72,   110,    28,     3,     4,    75,    55,    56,
      57,    58,    59,    60,    61,    62,    40,    41,    73,     5,
       6,     7,     8,     9,   120,    45,     3,     4,    10,   104,
       5,     6,     7,     8,     9,     3,     4,    38,    11,    10,
      74,    35,    36,    37,    12,    63,    64,    65,    66,    11,
      42,    44,    45,    38,    49,    12,    69,    40,    41,    79,
       5,     6,     7,     8,     9,    76,    97,   111,    99,    10,
     106,    47,    48,    40,    41,   119,   107,   108,    68,    11,
      70,    71,   115,   117,   122,    12,   123,   126,   127,   128,
      13,     0,   118,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,    29,     0,    77,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,    78,     0,    30,    31,    32,
      67,     0,    63,    64,    65,    66,    33,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    98,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,     0,     0,   112,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,    65,    66,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,    29,     0,     0,     0,    63,    64,    65,    66,
       0,     0,     0,    63,    64,    65,    66,     0,   116,     0,
       0,     0,     0,   121,    30,    31,    32,   125,     0,    63,
      64,    65,    66,    33,     0,     0,     0,   129,   130
};

static const yytype_int16 yycheck[] =
{
      27,     0,    23,    74,     3,     4,    20,    18,    24,    23,
      26,    24,    24,    26,    23,     3,     4,    44,    12,    13,
      14,    15,    16,    17,    18,    19,    40,    41,    39,    28,
      29,    30,    31,    32,    22,    47,     3,     4,    37,   110,
      28,    29,    30,    31,    32,     3,     4,    20,    47,    37,
      23,    23,    23,    23,    53,    49,    50,    51,    52,    47,
      47,    26,    47,    20,    23,    53,    47,    40,    41,    47,
      28,    29,    30,    31,    32,    27,    24,   104,    24,    37,
      21,    28,    29,    40,    41,   112,    26,    21,    35,    47,
      37,    38,    47,    21,    24,    53,    39,    24,    21,    21,
       1,    -1,   110,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    23,    -1,    24,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    -1,    45,    46,    47,
      48,    -1,    49,    50,    51,    52,    54,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      49,    50,    51,    52,    24,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    49,    50,    51,
      52,    -1,    -1,    27,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    13,    14,    15,
      16,    17,    18,    19,    -1,    49,    50,    51,    52,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    23,    -1,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,   108,    -1,
      -1,    -1,    -1,   113,    45,    46,    47,   117,    -1,    49,
      50,    51,    52,    54,    -1,    -1,    -1,   127,   128
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,     0,     3,     4,    28,    29,    30,    31,    32,
      37,    47,    53,    57,    58,    59,    62,    63,    64,    65,
      66,    67,    69,    70,    72,    74,    75,    23,    23,    23,
      45,    46,    47,    54,    68,    23,    23,    23,    20,    23,
      40,    41,    47,    65,    26,    47,    66,    68,    68,    23,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    49,    50,    51,    52,    48,    68,    47,
      68,    68,    24,    65,    23,    66,    27,    24,    24,    47,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    24,    24,    24,
      24,    24,    60,    61,    64,    68,    21,    26,    21,    24,
      26,    66,    27,    57,    71,    47,    71,    21,    61,    66,
      22,    71,    24,    39,    73,    71,    24,    21,    21,    71,
      71
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
        case 15:

/* Line 1455 of yacc.c  */
#line 63 "project2.y"
    {printf("%s is detected.\n", (yyvsp[(1) - (1)].uni_var).str);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 67 "project2.y"
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

  case 18:

/* Line 1455 of yacc.c  */
#line 81 "project2.y"
    {printf("Function declared\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 108 "project2.y"
    {assignment((yyvsp[(1) - (3)].uni_var).str, (yyvsp[(3) - (3)].uni_var).ival, (yyvsp[(3) - (3)].uni_var).fval, (yyvsp[(3) - (3)].uni_var).type); (yyval.uni_var).str = (yyvsp[(1) - (3)].uni_var).str; (yyval.uni_var).ival = (yyvsp[(3) - (3)].uni_var).ival; (yyval.uni_var).fval = (yyvsp[(3) - (3)].uni_var).fval; (yyval.uni_var).type = (yyvsp[(3) - (3)].uni_var).type;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 109 "project2.y"
    {
            int i = find_symbol_table_index((yyvsp[(1) - (2)].uni_var).str);
            if (i != index) {
              symbol_table[i].ival = symbol_table[i].ival + 1;
              symbol_table[i].fval = symbol_table[i].fval + 1.0;
            }
          ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 116 "project2.y"
    {
            int i = find_symbol_table_index((yyvsp[(1) - (2)].uni_var).str);
            if (i != index) {
              symbol_table[i].ival = symbol_table[i].ival - 1;
              symbol_table[i].fval = symbol_table[i].fval - 1.0;
            }
          ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 123 "project2.y"
    {assignment((yyvsp[(1) - (1)].uni_var).str, 0, 0.0, "int");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 128 "project2.y"
    {printf("Return %d from function\n", (yyvsp[(2) - (2)].uni_var).ival);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 132 "project2.y"
    {(yyval.uni_var).ival = (yyvsp[(1) - (1)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (1)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (1)].uni_var).type;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 133 "project2.y"
    {(yyval.uni_var).ival = (yyvsp[(1) - (1)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (1)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (1)].uni_var).type;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 134 "project2.y"
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

  case 37:

/* Line 1455 of yacc.c  */
#line 144 "project2.y"
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

  case 38:

/* Line 1455 of yacc.c  */
#line 168 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = ((yyvsp[(1) - (3)].uni_var).ival || (yyvsp[(3) - (3)].uni_var).ival);
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 174 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = ((yyvsp[(1) - (3)].uni_var).ival && (yyvsp[(3) - (3)].uni_var).ival);
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 180 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival ^ (yyvsp[(3) - (3)].uni_var).ival;
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 186 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival & (yyvsp[(3) - (3)].uni_var).ival;
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 192 "project2.y"
    {
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int")==0) {
              (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival | (yyvsp[(3) - (3)].uni_var).ival;
              (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
            }
          ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 198 "project2.y"
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

  case 44:

/* Line 1455 of yacc.c  */
#line 210 "project2.y"
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

  case 45:

/* Line 1455 of yacc.c  */
#line 222 "project2.y"
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

  case 46:

/* Line 1455 of yacc.c  */
#line 234 "project2.y"
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

  case 47:

/* Line 1455 of yacc.c  */
#line 246 "project2.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 258 "project2.y"
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

  case 49:

/* Line 1455 of yacc.c  */
#line 270 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival + (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval + (yyvsp[(3) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 271 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival - (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval - (yyvsp[(3) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 272 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival * (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval * (yyvsp[(3) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 273 "project2.y"
    { 
            if (strcmp((yyvsp[(1) - (3)].uni_var).type, "int") == 0 && (yyvsp[(3) - (3)].uni_var).ival != 0) (yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival / (yyvsp[(3) - (3)].uni_var).ival;
            else if (strcmp((yyvsp[(1) - (3)].uni_var).type, "float") == 0 && (yyvsp[(3) - (3)].uni_var).fval != 0.0) (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval / (yyvsp[(3) - (3)].uni_var).fval;
            (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;
          ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 278 "project2.y"
    {(yyval.uni_var).ival = (yyvsp[(1) - (3)].uni_var).ival % (yyvsp[(3) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 279 "project2.y"
    { (yyval.uni_var).ival = pow((yyvsp[(1) - (3)].uni_var).ival, (yyvsp[(3) - (3)].uni_var).ival), (yyval.uni_var).fval = (yyvsp[(1) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(1) - (3)].uni_var).type; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 280 "project2.y"
    { (yyval.uni_var).ival = (yyvsp[(2) - (3)].uni_var).ival, (yyval.uni_var).fval = (yyvsp[(2) - (3)].uni_var).fval, (yyval.uni_var).type = (yyvsp[(2) - (3)].uni_var).type;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 284 "project2.y"
    {
        if (strcmp((yyvsp[(3) - (4)].uni_var).type, "int") == 0) printf("%d\n", (yyvsp[(3) - (4)].uni_var).ival);
        else if (strcmp((yyvsp[(3) - (4)].uni_var).type, "float") == 0) printf("%.2lf\n", (yyvsp[(3) - (4)].uni_var).fval);
      ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 288 "project2.y"
    {
        printf("%s\n", (yyvsp[(3) - (4)].uni_var).str);
      ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 294 "project2.y"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 313 "project2.y"
    {(yyval.uni_var).ival=(yyvsp[(1) - (2)].uni_var).ival;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 317 "project2.y"
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

  case 62:

/* Line 1455 of yacc.c  */
#line 328 "project2.y"
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

  case 63:

/* Line 1455 of yacc.c  */
#line 342 "project2.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 346 "project2.y"
    {
      if((yyvsp[(3) - (6)].uni_var).ival)
      {
          printf("Inside while loop\n");
      }
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 355 "project2.y"
    {
      if ((yyvsp[(5) - (10)].uni_var).ival) {
        printf("This is a for loop.\n");
      }
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2026 "project2.tab.c"
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
#line 361 "project2.y"



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

