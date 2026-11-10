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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ALGORITMO_TK = 258,            /* ALGORITMO_TK  */
    ID_TK = 259,                   /* ID_TK  */
    PUNTOYCOMA_TK = 260,           /* PUNTOYCOMA_TK  */
    FALGORITMO_TK = 261,           /* FALGORITMO_TK  */
    TIPO_TK = 262,                 /* TIPO_TK  */
    FTIPO_TK = 263,                /* FTIPO_TK  */
    CONST_TK = 264,                /* CONST_TK  */
    FCONST_TK = 265,               /* FCONST_TK  */
    VAR_TK = 266,                  /* VAR_TK  */
    FVAR_TK = 267,                 /* FVAR_TK  */
    IDENTIFICADOR_TK = 268,        /* IDENTIFICADOR_TK  */
    IGUAL_TK = 269,                /* IGUAL_TK  */
    TUPLA_TK = 270,                /* TUPLA_TK  */
    FTUPLA_TK = 271,               /* FTUPLA_TK  */
    TABLA_TK = 272,                /* TABLA_TK  */
    DE_TK = 273,                   /* DE_TK  */
    REF_TK = 274,                  /* REF_TK  */
    DOBLEPUNTO_TK = 275,           /* DOBLEPUNTO_TK  */
    LITERAL_TK = 276,              /* LITERAL_TK  */
    DOSPUNTOS_TK = 277,            /* DOSPUNTOS_TK  */
    ENTERO_TK = 278,               /* ENTERO_TK  */
    REAL_TK = 279,                 /* REAL_TK  */
    BOOLEANO_TK = 280,             /* BOOLEANO_TK  */
    CADENA_TK = 281,               /* CADENA_TK  */
    CARACTER_TK = 282,             /* CARACTER_TK  */
    COMA_TK = 283,                 /* COMA_TK  */
    ENT_TK = 284,                  /* ENT_TK  */
    SAL_TK = 285,                  /* SAL_TK  */
    ES_TK = 286,                   /* ES_TK  */
    SUMA_TK = 287,                 /* SUMA_TK  */
    RESTA_TK = 288,                /* RESTA_TK  */
    MULT_TK = 289,                 /* MULT_TK  */
    DIVARIT_TK = 290,              /* DIVARIT_TK  */
    MOD_TK = 291,                  /* MOD_TK  */
    DIV_TK = 292,                  /* DIV_TK  */
    PARENTESISA_TK = 293,          /* PARENTESISA_TK  */
    PARENTESISC_TK = 294,          /* PARENTESISC_TK  */
    CORCHETEA_TK = 295,            /* CORCHETEA_TK  */
    CORCHETEC_TK = 296,            /* CORCHETEC_TK  */
    CORCHETES_TK = 297,            /* CORCHETES_TK  */
    PUNTO_TK = 298,                /* PUNTO_TK  */
    Y_TK = 299,                    /* Y_TK  */
    O_TK = 300,                    /* O_TK  */
    NO_TK = 301,                   /* NO_TK  */
    MENOR_TK = 302,                /* MENOR_TK  */
    MAYOR_TK = 303,                /* MAYOR_TK  */
    MENORIGUAL_TK = 304,           /* MENORIGUAL_TK  */
    MAYORIGUAL_TK = 305,           /* MAYORIGUAL_TK  */
    DIFERENTE_TK = 306,            /* DIFERENTE_TK  */
    CONTINUAR_TK = 307,            /* CONTINUAR_TK  */
    ASIGNACION_TK = 308,           /* ASIGNACION_TK  */
    SI_TK = 309,                   /* SI_TK  */
    FLECHA_TK = 310,               /* FLECHA_TK  */
    FSI_TK = 311,                  /* FSI_TK  */
    MIENTRAS_TK = 312,             /* MIENTRAS_TK  */
    HACER_TK = 313,                /* HACER_TK  */
    FMIENTRAS_TK = 314,            /* FMIENTRAS_TK  */
    PARA_TK = 315,                 /* PARA_TK  */
    HASTA_TK = 316,                /* HASTA_TK  */
    FPARA_TK = 317,                /* FPARA_TK  */
    ACCION_TK = 318,               /* ACCION_TK  */
    FACCION_TK = 319,              /* FACCION_TK  */
    FUNCION_TK = 320,              /* FUNCION_TK  */
    DEV_TK = 321,                  /* DEV_TK  */
    FFUNCION_TK = 322,             /* FFUNCION_TK  */
    COMENTARIO = 323,              /* COMENTARIO  */
    VERDADERO_TK = 324,            /* VERDADERO_TK  */
    FALSO_TK = 325                 /* FALSO_TK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
