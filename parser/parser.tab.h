/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "ast/ast.h"
#include "parser.tab.h"

extern void yyerror (char const *);
extern int yylex(void);

#line 60 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    VAL_STRING = 259,              /* VAL_STRING  */
    VAL_INTEGER = 260,             /* VAL_INTEGER  */
    VAL_BOOL = 261,                /* VAL_BOOL  */
    VAL_FLOAT = 262,               /* VAL_FLOAT  */
    OP_EQUALS = 263,               /* OP_EQUALS  */
    OP_GREATER = 264,              /* OP_GREATER  */
    OP_LESS = 265,                 /* OP_LESS  */
    L_BRACE = 266,                 /* L_BRACE  */
    R_BRACE = 267,                 /* R_BRACE  */
    L_BRACKET = 268,               /* L_BRACKET  */
    R_BRACKET = 269,               /* R_BRACKET  */
    SEMICOLON = 270,               /* SEMICOLON  */
    COLON = 271,                   /* COLON  */
    SELECT = 272,                  /* SELECT  */
    INSERT = 273,                  /* INSERT  */
    DELETE = 274,                  /* DELETE  */
    UPDATE = 275                   /* UPDATE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

	char *sval;
	float fval;
	int ival;
	bool bval;
	struct ast_node *node;

#line 105 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
