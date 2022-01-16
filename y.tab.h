/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_NUMERO = 258,
    TOK_AJUSTE = 259,
    TOK_RUTA = 260,
    TOK_UNIDADES = 261,
    TOK_TIPO = 262,
    TOK_NOMBRE = 263,
    TOK_CAPACIDAD = 264,
    TOK_SISTEMA = 265,
    TOK_IDENTIFICADOR = 266,
    TOK_MKDISK = 267,
    TOK_RMDISK = 268,
    TOK_FDISK = 269,
    TOK_MOUNT = 270,
    TOK_UNMOUNT = 271,
    TOK_MKFS = 272,
    TOK_LOGIN = 273,
    TOK_LOGOUT = 274,
    TOK_MKGRP = 275,
    TOK_RMGRP = 276,
    TOK_MKUSR = 277,
    TOK_RMUSR = 278,
    TOK_CHMOD = 279,
    TOK_TOUCH = 280,
    TOK_MKDIR = 281,
    TOK_RM = 282,
    TOK_EDIT = 283,
    TOK_REN = 284,
    TOK_CP = 285,
    TOK_MV = 286,
    TOK_FIND = 287,
    TOK_CHOWN = 288,
    TOK_CHGRP = 289,
    TOK_RECOVERY = 290,
    TOK_LOSS = 291,
    TOK_EXEC = 292,
    TOK_SIZE = 293,
    TOK_PATH = 294,
    TOK_NAME = 295,
    TOK_ID = 296,
    TOK_USR = 297,
    TOK_PWD = 298,
    TOK_GRP = 299,
    TOK_UGO = 300,
    TOK_CAT = 301,
    TOK_FILEN = 302,
    TOK_STDIN = 303,
    TOK_CONT = 304,
    TOK_DEST = 305,
    TOK_F = 306,
    TOK_U = 307,
    TOK_TYPE = 308,
    TOK_DELETE = 309,
    TOK_ADD = 310,
    TOK_FS = 311,
    TOK_R = 312,
    TOK_P = 313,
    TOK_IGUAL = 314,
    TOK_SALTO = 315
  };
#endif
/* Tokens.  */
#define TOK_NUMERO 258
#define TOK_AJUSTE 259
#define TOK_RUTA 260
#define TOK_UNIDADES 261
#define TOK_TIPO 262
#define TOK_NOMBRE 263
#define TOK_CAPACIDAD 264
#define TOK_SISTEMA 265
#define TOK_IDENTIFICADOR 266
#define TOK_MKDISK 267
#define TOK_RMDISK 268
#define TOK_FDISK 269
#define TOK_MOUNT 270
#define TOK_UNMOUNT 271
#define TOK_MKFS 272
#define TOK_LOGIN 273
#define TOK_LOGOUT 274
#define TOK_MKGRP 275
#define TOK_RMGRP 276
#define TOK_MKUSR 277
#define TOK_RMUSR 278
#define TOK_CHMOD 279
#define TOK_TOUCH 280
#define TOK_MKDIR 281
#define TOK_RM 282
#define TOK_EDIT 283
#define TOK_REN 284
#define TOK_CP 285
#define TOK_MV 286
#define TOK_FIND 287
#define TOK_CHOWN 288
#define TOK_CHGRP 289
#define TOK_RECOVERY 290
#define TOK_LOSS 291
#define TOK_EXEC 292
#define TOK_SIZE 293
#define TOK_PATH 294
#define TOK_NAME 295
#define TOK_ID 296
#define TOK_USR 297
#define TOK_PWD 298
#define TOK_GRP 299
#define TOK_UGO 300
#define TOK_CAT 301
#define TOK_FILEN 302
#define TOK_STDIN 303
#define TOK_CONT 304
#define TOK_DEST 305
#define TOK_F 306
#define TOK_U 307
#define TOK_TYPE 308
#define TOK_DELETE 309
#define TOK_ADD 310
#define TOK_FS 311
#define TOK_R 312
#define TOK_P 313
#define TOK_IGUAL 314
#define TOK_SALTO 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "calc.y"

    char *entrada;

#line 181 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
