/* A Bison parser, made by GNU Bison 2.7.1.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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

#ifndef YY_AP_EXPR_YY_UTIL_EXPR_PARSE_H_INCLUDED
# define YY_AP_EXPR_YY_UTIL_EXPR_PARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ap_expr_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_TRUE = 258,
     T_FALSE = 259,
     T_EXPR_BOOL = 260,
     T_EXPR_STRING = 261,
     T_ERROR = 262,
     T_DIGIT = 263,
     T_ID = 264,
     T_STRING = 265,
     T_REGEX = 266,
     T_REGSUB = 267,
     T_REG_MATCH = 268,
     T_REG_SUBST = 269,
     T_REG_FLAGS = 270,
     T_REG_REF = 271,
     T_OP_UNARY = 272,
     T_OP_BINARY = 273,
     T_STR_BEGIN = 274,
     T_STR_END = 275,
     T_VAR_BEGIN = 276,
     T_VAR_END = 277,
     T_VAREXP_BEGIN = 278,
     T_VAREXP_END = 279,
     T_OP_EQ = 280,
     T_OP_NE = 281,
     T_OP_LT = 282,
     T_OP_LE = 283,
     T_OP_GT = 284,
     T_OP_GE = 285,
     T_OP_REG = 286,
     T_OP_NRE = 287,
     T_OP_IN = 288,
     T_OP_STR_EQ = 289,
     T_OP_STR_NE = 290,
     T_OP_STR_LT = 291,
     T_OP_STR_LE = 292,
     T_OP_STR_GT = 293,
     T_OP_STR_GE = 294,
     T_OP_CONCAT = 295,
     T_OP_SPLIT = 296,
     T_OP_JOIN = 297,
     T_OP_OR = 298,
     T_OP_AND = 299,
     T_OP_NOT = 300
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 35 "util_expr_parse.y"

    char      *cpVal;
    ap_expr_t *exVal;
    int        num;


/* Line 2053 of yacc.c  */
#line 109 "util_expr_parse.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ap_expr_yyparse (void *YYPARSE_PARAM);
#else
int ap_expr_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ap_expr_yyparse (ap_expr_parse_ctx_t *ctx);
#else
int ap_expr_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_AP_EXPR_YY_UTIL_EXPR_PARSE_H_INCLUDED  */
