
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     MIN = 303,
     MAX = 304,
     OUTPUTTEXT = 305,
     NOTEQUAL = 306,
     BITWISEAND = 307,
     BITWISEXOR = 308,
     BITWISEOR = 309,
     LIB = 310,
     GCD = 311,
     LCM = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 32 "project2.y"

  struct abc {
    int ival;
    float fval;
    char *str;
    char *type;
  }uni_var;



/* Line 1676 of yacc.c  */
#line 120 "project2.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


