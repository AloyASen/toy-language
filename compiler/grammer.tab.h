/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_GRAMMER_TAB_H_INCLUDED
# define YY_YY_GRAMMER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammer.y" /* yacc.c:1909  */

    

#line 48 "grammer.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END_OF_FILE = 0,
    CONSOLE = 258,
    BREAK = 259,
    CASE = 260,
    CATCH = 261,
    CLASS = 262,
    CONST = 263,
    CONTINUE = 264,
    DEBUGGER = 265,
    DEFAULT = 266,
    DELETE = 267,
    DO = 268,
    ELSE = 269,
    EXPORT = 270,
    EXTENDS = 271,
    FINALLY = 272,
    FOR = 273,
    FUNCTION = 274,
    IF = 275,
    IMPORT = 276,
    IN = 277,
    INSTANCEOF = 278,
    LET = 279,
    NEW = 280,
    OF = 281,
    RETURN = 282,
    SUPER = 283,
    SWITCH = 284,
    THIS = 285,
    THROW = 286,
    TRY = 287,
    TYPEOF = 288,
    VAR = 289,
    VOID = 290,
    WHILE = 291,
    WITH = 292,
    YIELD = 293,
    ENUM = 294,
    AWAIT = 295,
    IMPLEMENTS = 296,
    INTERFACE = 297,
    PACKAGE = 298,
    PRIVATE = 299,
    PROTECTED = 300,
    PUBLIC = 301,
    LITERAL_NULL = 302,
    LITERAL_TRUE = 303,
    LITERAL_FALSE = 304,
    LITERAL_UNDEFINED = 305,
    LITERAL_NAN = 306,
    UNARY_ADD = 307,
    UNARY_SUBTRACT = 308,
    LOGICAL_NOT = 309,
    MULTIPLY = 310,
    DIVIDE = 311,
    MODULO = 312,
    ADD = 313,
    SUBTRACT = 314,
    EQUAL = 315,
    NOT_EQUAL = 316,
    EXACTLY_EQUAL = 317,
    NOT_EXACTLY_EQUAL = 318,
    LEFT_SHIFT = 319,
    SIGNED_RIGHT_SHIFT = 320,
    UNSIGNED_RIGHT_SHIFT = 321,
    LESS_THAN = 322,
    GREATER_THAN = 323,
    LESS_THAN_OR_EQUAL = 324,
    GREATER_THAN_OR_EQUAL = 325,
    QUESTION_MARK = 326,
    COLON = 327,
    LOGICAL_AND = 328,
    LOGICAL_OR = 329,
    BITWISE_AND = 330,
    BITWISE_OR = 331,
    BITWISE_XOR = 332,
    BITWISE_NOT = 333,
    ASSIGNMENT = 334,
    ADDITION_ASSIGNMENT = 335,
    SUBTRACTION_ASSIGNMENT = 336,
    MULTIPLICATION_ASSIGNMENT = 337,
    DIVISION_ASSIGNMENT = 338,
    MODULUS_ASSIGNMENT = 339,
    EXPONENTIATION_ASSIGNMENT = 340,
    LEFT_SHIFT_ASSIGNMENT = 341,
    SIGNED_RIGHT_SHIFT_ASSIGNMENT = 342,
    UNSIGNED_RIGHT_SHIFT_ASSIGNMENT = 343,
    BITWISE_AND_ASSIGNMENT = 344,
    BITWISE_XOR_ASSIGNMENT = 345,
    BITWISE_OR_ASSIGNMENT = 346,
    ARROW_FUNCTION = 347,
    RIGHT_PAREN = 348,
    LEFT_PAREN = 349,
    RIGHT_BRACE = 350,
    LEFT_BRACE = 351,
    RIGHT_BRACKET = 352,
    LEFT_BRACKET = 353,
    COMMA = 354,
    FULL_STOP = 355,
    ELLIPSIS = 356,
    SEMICOLON = 357,
    DOUBLE_QUOTE = 358,
    SINGLE_QUOTE = 359,
    VALUE_INTEGER = 360,
    VALUE_DOUBLE = 361,
    VALUE_STRING = 362,
    IDENTIFIER = 363,
    LINE_FEED = 364,
    CARRIAGE_RETURN = 365,
    LINE_SEPARATOR = 366,
    PARAGRAPH_SEPARATOR = 367
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 135 "compiler/grammer.y" /* yacc.c:1909  */

    int int_value;
    double double_value;
    char* string_value;
    bool bool_value;
    char *char_value;

    variables *store;

#line 184 "grammer.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMER_TAB_H_INCLUDED  */
