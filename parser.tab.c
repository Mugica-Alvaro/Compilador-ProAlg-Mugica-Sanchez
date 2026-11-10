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
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	//#include "nombresDeTipos.h"
	//#include "literal.h"
	//#include "tablaDeConstantes.h"


	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	//extern int yylineno;
	//extern char *yytext;

	//TablaDeConstantes tc; //Es donde guardaremos las constantes

	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ALGORITMO_TK = 3,               /* ALGORITMO_TK  */
  YYSYMBOL_ID_TK = 4,                      /* ID_TK  */
  YYSYMBOL_PUNTOYCOMA_TK = 5,              /* PUNTOYCOMA_TK  */
  YYSYMBOL_FALGORITMO_TK = 6,              /* FALGORITMO_TK  */
  YYSYMBOL_TIPO_TK = 7,                    /* TIPO_TK  */
  YYSYMBOL_FTIPO_TK = 8,                   /* FTIPO_TK  */
  YYSYMBOL_CONST_TK = 9,                   /* CONST_TK  */
  YYSYMBOL_FCONST_TK = 10,                 /* FCONST_TK  */
  YYSYMBOL_VAR_TK = 11,                    /* VAR_TK  */
  YYSYMBOL_FVAR_TK = 12,                   /* FVAR_TK  */
  YYSYMBOL_IDENTIFICADOR_TK = 13,          /* IDENTIFICADOR_TK  */
  YYSYMBOL_IGUAL_TK = 14,                  /* IGUAL_TK  */
  YYSYMBOL_TUPLA_TK = 15,                  /* TUPLA_TK  */
  YYSYMBOL_FTUPLA_TK = 16,                 /* FTUPLA_TK  */
  YYSYMBOL_TABLA_TK = 17,                  /* TABLA_TK  */
  YYSYMBOL_DE_TK = 18,                     /* DE_TK  */
  YYSYMBOL_REF_TK = 19,                    /* REF_TK  */
  YYSYMBOL_DOBLEPUNTO_TK = 20,             /* DOBLEPUNTO_TK  */
  YYSYMBOL_LITERAL_TK = 21,                /* LITERAL_TK  */
  YYSYMBOL_DOSPUNTOS_TK = 22,              /* DOSPUNTOS_TK  */
  YYSYMBOL_ENTERO_TK = 23,                 /* ENTERO_TK  */
  YYSYMBOL_REAL_TK = 24,                   /* REAL_TK  */
  YYSYMBOL_BOOLEANO_TK = 25,               /* BOOLEANO_TK  */
  YYSYMBOL_CADENA_TK = 26,                 /* CADENA_TK  */
  YYSYMBOL_CARACTER_TK = 27,               /* CARACTER_TK  */
  YYSYMBOL_COMA_TK = 28,                   /* COMA_TK  */
  YYSYMBOL_ENT_TK = 29,                    /* ENT_TK  */
  YYSYMBOL_SAL_TK = 30,                    /* SAL_TK  */
  YYSYMBOL_ES_TK = 31,                     /* ES_TK  */
  YYSYMBOL_SUMA_TK = 32,                   /* SUMA_TK  */
  YYSYMBOL_RESTA_TK = 33,                  /* RESTA_TK  */
  YYSYMBOL_MULT_TK = 34,                   /* MULT_TK  */
  YYSYMBOL_DIVARIT_TK = 35,                /* DIVARIT_TK  */
  YYSYMBOL_MOD_TK = 36,                    /* MOD_TK  */
  YYSYMBOL_DIV_TK = 37,                    /* DIV_TK  */
  YYSYMBOL_PARENTESISA_TK = 38,            /* PARENTESISA_TK  */
  YYSYMBOL_PARENTESISC_TK = 39,            /* PARENTESISC_TK  */
  YYSYMBOL_CORCHETEA_TK = 40,              /* CORCHETEA_TK  */
  YYSYMBOL_CORCHETEC_TK = 41,              /* CORCHETEC_TK  */
  YYSYMBOL_CORCHETES_TK = 42,              /* CORCHETES_TK  */
  YYSYMBOL_PUNTO_TK = 43,                  /* PUNTO_TK  */
  YYSYMBOL_Y_TK = 44,                      /* Y_TK  */
  YYSYMBOL_O_TK = 45,                      /* O_TK  */
  YYSYMBOL_NO_TK = 46,                     /* NO_TK  */
  YYSYMBOL_MENOR_TK = 47,                  /* MENOR_TK  */
  YYSYMBOL_MAYOR_TK = 48,                  /* MAYOR_TK  */
  YYSYMBOL_MENORIGUAL_TK = 49,             /* MENORIGUAL_TK  */
  YYSYMBOL_MAYORIGUAL_TK = 50,             /* MAYORIGUAL_TK  */
  YYSYMBOL_DIFERENTE_TK = 51,              /* DIFERENTE_TK  */
  YYSYMBOL_CONTINUAR_TK = 52,              /* CONTINUAR_TK  */
  YYSYMBOL_ASIGNACION_TK = 53,             /* ASIGNACION_TK  */
  YYSYMBOL_SI_TK = 54,                     /* SI_TK  */
  YYSYMBOL_FLECHA_TK = 55,                 /* FLECHA_TK  */
  YYSYMBOL_FSI_TK = 56,                    /* FSI_TK  */
  YYSYMBOL_MIENTRAS_TK = 57,               /* MIENTRAS_TK  */
  YYSYMBOL_HACER_TK = 58,                  /* HACER_TK  */
  YYSYMBOL_FMIENTRAS_TK = 59,              /* FMIENTRAS_TK  */
  YYSYMBOL_PARA_TK = 60,                   /* PARA_TK  */
  YYSYMBOL_HASTA_TK = 61,                  /* HASTA_TK  */
  YYSYMBOL_FPARA_TK = 62,                  /* FPARA_TK  */
  YYSYMBOL_ACCION_TK = 63,                 /* ACCION_TK  */
  YYSYMBOL_FACCION_TK = 64,                /* FACCION_TK  */
  YYSYMBOL_FUNCION_TK = 65,                /* FUNCION_TK  */
  YYSYMBOL_DEV_TK = 66,                    /* DEV_TK  */
  YYSYMBOL_FFUNCION_TK = 67,               /* FFUNCION_TK  */
  YYSYMBOL_COMENTARIO = 68,                /* COMENTARIO  */
  YYSYMBOL_VERDADERO_TK = 69,              /* VERDADERO_TK  */
  YYSYMBOL_FALSO_TK = 70,                  /* FALSO_TK  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 72,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 73,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 74,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 75,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 76,                  /* decl_a_f  */
  YYSYMBOL_bloque = 77,                    /* bloque  */
  YYSYMBOL_declaraciones = 78,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 79,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_const = 80,         /* declaracion_const  */
  YYSYMBOL_declaracion_var = 81,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 82,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 83,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 84,               /* expresion_t  */
  YYSYMBOL_lista_campos = 85,              /* lista_campos  */
  YYSYMBOL_tipo_base = 86,                 /* tipo_base  */
  YYSYMBOL_lista_d_cte = 87,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 88,               /* lista_d_var  */
  YYSYMBOL_lista_id = 89,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 90,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 91,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 92,                  /* decl_sal  */
  YYSYMBOL_expresion = 93,                 /* expresion  */
  YYSYMBOL_exp = 94,                       /* exp  */
  YYSYMBOL_operando = 95,                  /* operando  */
  YYSYMBOL_instrucciones = 96,             /* instrucciones  */
  YYSYMBOL_instruccion = 97,               /* instruccion  */
  YYSYMBOL_asignacion = 98,                /* asignacion  */
  YYSYMBOL_alternativa = 99,               /* alternativa  */
  YYSYMBOL_lista_opciones = 100,           /* lista_opciones  */
  YYSYMBOL_iteracion = 101,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 102,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 103,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 104,                 /* accion_d  */
  YYSYMBOL_funcion_d = 105,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 106,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 107,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 108,               /* d_par_form  */
  YYSYMBOL_d_p_form = 109,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 110,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 111,               /* funcion_ll  */
  YYSYMBOL_l_ll = 112                      /* l_ll  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    94,    94,    98,   102,   106,   107,   108,   112,   113,
     114,   118,   122,   123,   124,   125,   134,   138,   142,   147,
     148,   152,   153,   154,   155,   156,   157,   161,   162,   166,
     167,   171,   172,   173,   174,   175,   181,   182,   187,   188,
     192,   193,   198,   199,   200,   201,   205,   209,   216,   217,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   246,   247,   248,   249,   258,   259,   263,   264,
     265,   266,   267,   271,   275,   279,   280,   284,   285,   289,
     293,   299,   303,   307,   311,   315,   316,   320,   321,   322,
     326,   330,   334,   335,   336
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
  "\"end of file\"", "error", "\"invalid token\"", "ALGORITMO_TK",
  "ID_TK", "PUNTOYCOMA_TK", "FALGORITMO_TK", "TIPO_TK", "FTIPO_TK",
  "CONST_TK", "FCONST_TK", "VAR_TK", "FVAR_TK", "IDENTIFICADOR_TK",
  "IGUAL_TK", "TUPLA_TK", "FTUPLA_TK", "TABLA_TK", "DE_TK", "REF_TK",
  "DOBLEPUNTO_TK", "LITERAL_TK", "DOSPUNTOS_TK", "ENTERO_TK", "REAL_TK",
  "BOOLEANO_TK", "CADENA_TK", "CARACTER_TK", "COMA_TK", "ENT_TK", "SAL_TK",
  "ES_TK", "SUMA_TK", "RESTA_TK", "MULT_TK", "DIVARIT_TK", "MOD_TK",
  "DIV_TK", "PARENTESISA_TK", "PARENTESISC_TK", "CORCHETEA_TK",
  "CORCHETEC_TK", "CORCHETES_TK", "PUNTO_TK", "Y_TK", "O_TK", "NO_TK",
  "MENOR_TK", "MAYOR_TK", "MENORIGUAL_TK", "MAYORIGUAL_TK", "DIFERENTE_TK",
  "CONTINUAR_TK", "ASIGNACION_TK", "SI_TK", "FLECHA_TK", "FSI_TK",
  "MIENTRAS_TK", "HACER_TK", "FMIENTRAS_TK", "PARA_TK", "HASTA_TK",
  "FPARA_TK", "ACCION_TK", "FACCION_TK", "FUNCION_TK", "DEV_TK",
  "FFUNCION_TK", "COMENTARIO", "VERDADERO_TK", "FALSO_TK", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "declaracion_tipo",
  "declaracion_const", "declaracion_var", "lista_d_tipo", "d_tipo",
  "expresion_t", "lista_campos", "tipo_base", "lista_d_cte", "lista_d_var",
  "lista_id", "decl_ent_sal", "decl_ent", "decl_sal", "expresion", "exp",
  "operando", "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_exp", "it_cota_fija", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-49)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    25,    26,    29,  -116,    97,    24,    31,    55,    44,
      97,    97,    37,    48,    56,    93,   113,   128,    60,     0,
      55,    55,    55,   132,   133,    83,    44,    44,  -116,  -116,
     158,   130,   131,   148,   127,   144,   135,   120,  -116,   126,
    -116,    15,    15,   152,     6,  -116,   162,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,   134,    55,   136,    55,
     113,   113,   112,   159,  -116,  -116,  -116,    12,   179,   154,
     158,     4,  -116,  -116,  -116,  -116,  -116,    15,    15,    15,
      15,  -116,  -116,   190,   177,  -116,   256,   -14,   104,  -116,
    -116,   194,  -116,   113,   195,   158,  -116,    15,   160,  -116,
     193,    69,   150,  -116,    15,   192,    15,     0,   -15,   142,
     113,   145,  -116,  -116,  -116,  -116,    15,   191,   196,   155,
    -116,   256,   231,   231,   276,   231,    24,   155,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    31,  -116,  -116,   205,   241,   175,     0,     0,
      15,   246,  -116,   104,   256,  -116,   113,   113,   113,   176,
     212,  -116,   187,    15,   208,   158,  -116,   198,  -116,  -116,
    -116,   256,   256,   256,   256,   256,   256,   231,   231,   231,
     231,   231,   231,   231,   231,  -116,   113,    15,  -116,   189,
     170,   172,  -116,   210,   232,   234,   225,   -15,   168,   111,
    -116,   253,   155,  -116,  -116,    15,   203,  -116,    15,   158,
     158,   158,  -116,  -116,   158,  -116,   179,   220,   202,  -116,
     188,  -116,  -116,  -116,   257,  -116,   254,     0,     0,  -116,
     158,   189,   209,  -116,  -116,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    37,    15,    10,
       7,     7,     0,     0,     0,     0,    39,     0,     0,     0,
      15,    15,    15,     0,     0,    45,    10,    10,     5,     6,
       0,     0,     0,     0,    41,     0,     0,     0,     4,    72,
      78,     0,     0,     0,     0,    11,    77,    79,    80,    81,
      88,    87,    82,    12,    13,    14,     0,    15,     0,    15,
      39,    39,     0,    42,    44,     8,     9,    72,    30,     0,
       0,    58,    31,    32,    33,    34,    35,     0,     0,     0,
       0,    64,    65,     0,     0,    26,    27,    48,    57,    49,
      16,     0,    17,     0,     0,     0,     2,   104,    72,    58,
       0,     0,     0,    75,     0,     0,     0,     0,    96,     0,
      39,     0,    46,    47,     3,    43,   104,     0,     0,     0,
      25,     0,    60,    59,    48,    63,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    40,    18,     0,   103,     0,     0,     0,
       0,     0,    72,    73,    83,    76,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,    21,     0,    56,    19,
      24,    68,    66,    67,    71,    70,    69,    50,    51,    52,
      53,    54,    55,    61,    62,    36,    39,   104,   100,    86,
       0,     0,    74,     0,     0,     0,     0,    96,     0,     0,
     101,     0,     0,    38,   102,     0,     0,    89,     0,     0,
       0,     0,    93,    95,     0,    92,    30,     0,     0,    84,
       0,    97,    98,    99,     0,    29,     0,     0,     0,    94,
       0,    86,     0,    22,    85,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,  -116,   122,    88,    51,    54,    22,    58,
    -116,   147,   -60,  -115,    61,  -116,   141,   -55,   -85,  -116,
    -116,   211,   -39,     2,   -19,  -106,  -116,  -116,  -116,    53,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,    89,  -116,  -116,
    -116,  -109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    83,    84,   118,    85,    15,    35,    36,    62,
      63,    64,    86,    87,    88,    45,    46,    47,    48,   206,
      49,    50,    51,    26,    27,    57,    59,   159,   160,    52,
      89,   147
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   155,   100,   101,   167,   112,   113,   164,   143,   -28,
     120,     1,   170,    39,   156,   157,   158,   -23,   134,   135,
     136,   137,   138,   139,   -28,   103,     4,    10,    98,     3,
     140,   141,    10,    10,     5,   145,    99,    12,   121,   121,
     121,   121,   189,   190,    14,   -28,   104,    77,    78,   105,
     116,    30,    40,    79,    41,   162,    31,    42,   146,   106,
      43,    80,     6,    11,     7,   151,    16,   154,    11,    11,
      32,   193,   194,   195,    53,    54,    55,   146,   204,   122,
     123,   124,   125,   128,    81,    82,   153,   217,    44,   171,
     172,   173,   174,   175,   176,   121,   121,   121,   121,   121,
     121,   121,   121,    33,     6,   201,     7,    23,   109,    24,
     111,   191,    60,    61,    65,    66,   129,   130,   131,   132,
     133,   231,   232,   103,   199,   128,    34,   149,    38,    44,
      44,   203,    28,    29,    37,    90,   177,   178,   179,   180,
     181,   182,   183,   184,   104,    56,    58,   105,   146,   221,
     222,   223,    91,    92,   224,    93,    94,    95,   129,   130,
     131,   132,   133,    96,    97,   102,   218,   107,    98,   220,
     233,    67,   108,    68,   110,    69,    71,    70,   215,    71,
     114,    72,    73,    74,    75,    76,   128,    77,    78,    61,
      77,    78,   117,    79,   119,   126,    79,   127,   116,   142,
     144,    80,   128,   150,    80,   152,   161,   128,    44,    44,
     186,   163,   166,   165,   188,   196,   128,   197,   202,   129,
     130,   131,   132,   133,    81,    82,   198,    81,    82,   207,
     212,   205,   209,   208,   214,   129,   130,   131,   132,   133,
     129,   130,   131,   132,   133,   -48,   228,   200,   148,   129,
     130,   131,   132,   133,   210,   128,   211,   227,   216,   219,
     128,   226,   229,   134,   135,   136,   137,   138,   139,   187,
     128,   235,   230,   169,   115,   140,   141,   225,   -48,   -48,
     -48,   -48,   -48,   185,   234,     0,   213,   192,   129,   130,
     131,   132,   133,   129,   130,   131,   132,   133,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   168,     0,     0,     0,     0,
     140,   141
};

static const yytype_int16 yycheck[] =
{
      19,   107,    41,    42,   119,    60,    61,   116,    93,     5,
      70,     3,   127,    13,    29,    30,    31,     5,    32,    33,
      34,    35,    36,    37,    20,    19,     0,     5,    13,     4,
      44,    45,    10,    11,     5,    95,    21,    13,    77,    78,
      79,    80,   148,   149,    13,    41,    40,    32,    33,    43,
      38,    14,    52,    38,    54,   110,     8,    57,    97,    53,
      60,    46,     7,     5,     9,   104,    11,   106,    10,    11,
      14,   156,   157,   158,    20,    21,    22,   116,   187,    77,
      78,    79,    80,    14,    69,    70,   105,   202,   107,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,    10,     7,   165,     9,    63,    57,    65,
      59,   150,    29,    30,    26,    27,    47,    48,    49,    50,
      51,   227,   228,    19,   163,    14,    13,    58,    68,   148,
     149,   186,    10,    11,     6,     5,   134,   135,   136,   137,
     138,   139,   140,   141,    40,    13,    13,    43,   187,   209,
     210,   211,    21,     5,   214,    28,    12,    22,    47,    48,
      49,    50,    51,    43,    38,    13,   205,     5,    13,   208,
     230,    13,    38,    15,    38,    17,    21,    19,    67,    21,
      68,    23,    24,    25,    26,    27,    14,    32,    33,    30,
      32,    33,    13,    38,    40,     5,    38,    20,    38,     5,
       5,    46,    14,    53,    46,    13,    64,    14,   227,   228,
       5,    66,    16,    22,    39,    39,    14,     5,    20,    47,
      48,    49,    50,    51,    69,    70,    39,    69,    70,    59,
       5,    42,    22,    61,    66,    47,    48,    49,    50,    51,
      47,    48,    49,    50,    51,    14,    58,    39,    55,    47,
      48,    49,    50,    51,    22,    14,    22,    55,     5,    56,
      14,    41,     5,    32,    33,    34,    35,    36,    37,    28,
      14,    62,    18,   126,    63,    44,    45,   216,    47,    48,
      49,    50,    51,   142,   231,    -1,   197,    41,    47,    48,
      49,    50,    51,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    -1,    -1,
      44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    72,     4,     0,     5,     7,     9,    73,    75,
      79,    80,    13,    82,    13,    87,    11,    74,    77,    78,
      79,    80,    81,    63,    65,    76,   104,   105,    75,    75,
      14,     8,    14,    10,    13,    88,    89,     6,    68,    13,
      52,    54,    57,    60,    95,    96,    97,    98,    99,   101,
     102,   103,   110,    78,    78,    78,    13,   106,    13,   107,
      29,    30,    90,    91,    92,    76,    76,    13,    15,    17,
      19,    21,    23,    24,    25,    26,    27,    32,    33,    38,
      46,    69,    70,    83,    84,    86,    93,    94,    95,   111,
       5,    21,     5,    28,    12,    22,    43,    38,    13,    21,
      93,    93,    13,    19,    40,    43,    53,     5,    38,    77,
      38,    77,    88,    88,    68,    92,    38,    13,    85,    40,
      83,    93,    94,    94,    94,    94,     5,    20,    14,    47,
      48,    49,    50,    51,    32,    33,    34,    35,    36,    37,
      44,    45,     5,    89,     5,    83,    93,   112,    55,    58,
      53,    93,    13,    95,    93,    96,    29,    30,    31,   108,
     109,    64,    88,    66,   112,    22,    16,    84,    39,    82,
      84,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    87,     5,    28,    39,    96,
      96,    93,    41,    89,    89,    89,    39,     5,    39,    93,
      39,    83,    20,    88,   112,    42,   100,    59,    61,    22,
      22,    22,     5,   108,    66,    67,     5,    84,    93,    56,
      93,    83,    83,    83,    83,    85,    41,    55,    58,     5,
      18,    96,    96,    83,   100,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    74,    75,    75,    75,    76,    76,
      76,    77,    78,    78,    78,    78,    79,    80,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    90,    90,    91,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    98,    99,   100,   100,   101,   101,   102,
     103,   104,   105,   106,   107,   108,   108,   109,   109,   109,
     110,   111,   112,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     1,     1,     1,     1,     1,     5,     0,     5,     0,
       3,     1,     1,     2,     1,     0,     2,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       2,     3,     3,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     4,     2,     3,     1,     1,     1,
       1,     1,     1,     3,     6,     5,     0,     1,     1,     5,
       9,     4,     6,     5,     7,     3,     0,     4,     4,     4,
       4,     4,     3,     1,     0
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
  case 2: /* desc_algoritmo: ALGORITMO_TK ID_TK PUNTOYCOMA_TK cabecera_alg bloque_alg FALGORITMO_TK PUNTO_TK  */
#line 94 "parser.y"
                                                                                   { }
#line 1374 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal COMENTARIO  */
#line 98 "parser.y"
                                                   { }
#line 1380 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque COMENTARIO  */
#line 102 "parser.y"
                      { }
#line 1386 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 106 "parser.y"
                                   { }
#line 1392 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 107 "parser.y"
                                      { }
#line 1398 "parser.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 108 "parser.y"
      { }
#line 1404 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 112 "parser.y"
                      { }
#line 1410 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 113 "parser.y"
                         { }
#line 1416 "parser.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 114 "parser.y"
      { }
#line 1422 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 118 "parser.y"
                                { }
#line 1428 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 122 "parser.y"
                                   { }
#line 1434 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 123 "parser.y"
                                      { }
#line 1440 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 124 "parser.y"
                                    { }
#line 1446 "parser.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 125 "parser.y"
      { }
#line 1452 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: TIPO_TK lista_d_tipo FTIPO_TK PUNTOYCOMA_TK  */
#line 134 "parser.y"
                                                { }
#line 1458 "parser.tab.c"
    break;

  case 17: /* declaracion_const: CONST_TK lista_d_cte FCONST_TK PUNTOYCOMA_TK  */
#line 138 "parser.y"
                                                 { }
#line 1464 "parser.tab.c"
    break;

  case 18: /* declaracion_var: VAR_TK lista_d_var FVAR_TK PUNTOYCOMA_TK  */
#line 142 "parser.y"
                                             { }
#line 1470 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: IDENTIFICADOR_TK IGUAL_TK d_tipo PUNTOYCOMA_TK lista_d_tipo  */
#line 147 "parser.y"
                                                                { }
#line 1476 "parser.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 148 "parser.y"
      { }
#line 1482 "parser.tab.c"
    break;

  case 21: /* d_tipo: TUPLA_TK lista_campos FTUPLA_TK  */
#line 152 "parser.y"
                                    { }
#line 1488 "parser.tab.c"
    break;

  case 22: /* d_tipo: TABLA_TK CORCHETEA_TK expresion_t DOBLEPUNTO_TK expresion_t CORCHETEC_TK DE_TK d_tipo  */
#line 153 "parser.y"
                                                                                            { }
#line 1494 "parser.tab.c"
    break;

  case 23: /* d_tipo: IDENTIFICADOR_TK  */
#line 154 "parser.y"
                       { }
#line 1500 "parser.tab.c"
    break;

  case 24: /* d_tipo: expresion_t DOBLEPUNTO_TK expresion_t  */
#line 155 "parser.y"
                                            { }
#line 1506 "parser.tab.c"
    break;

  case 25: /* d_tipo: REF_TK d_tipo  */
#line 156 "parser.y"
                    { }
#line 1512 "parser.tab.c"
    break;

  case 26: /* d_tipo: tipo_base  */
#line 157 "parser.y"
                { }
#line 1518 "parser.tab.c"
    break;

  case 27: /* expresion_t: expresion  */
#line 161 "parser.y"
              { }
#line 1524 "parser.tab.c"
    break;

  case 28: /* expresion_t: LITERAL_TK  */
#line 162 "parser.y"
                 { }
#line 1530 "parser.tab.c"
    break;

  case 29: /* lista_campos: IDENTIFICADOR_TK DOSPUNTOS_TK d_tipo PUNTOYCOMA_TK lista_campos  */
#line 166 "parser.y"
                                                                    { }
#line 1536 "parser.tab.c"
    break;

  case 30: /* lista_campos: %empty  */
#line 167 "parser.y"
      { }
#line 1542 "parser.tab.c"
    break;

  case 31: /* tipo_base: ENTERO_TK  */
#line 171 "parser.y"
              { }
#line 1548 "parser.tab.c"
    break;

  case 32: /* tipo_base: REAL_TK  */
#line 172 "parser.y"
              { }
#line 1554 "parser.tab.c"
    break;

  case 33: /* tipo_base: BOOLEANO_TK  */
#line 173 "parser.y"
                  { }
#line 1560 "parser.tab.c"
    break;

  case 34: /* tipo_base: CADENA_TK  */
#line 174 "parser.y"
                { }
#line 1566 "parser.tab.c"
    break;

  case 35: /* tipo_base: CARACTER_TK  */
#line 175 "parser.y"
                  { }
#line 1572 "parser.tab.c"
    break;

  case 36: /* lista_d_cte: IDENTIFICADOR_TK IGUAL_TK LITERAL_TK PUNTOYCOMA_TK lista_d_cte  */
#line 181 "parser.y"
                                                                   { }
#line 1578 "parser.tab.c"
    break;

  case 37: /* lista_d_cte: %empty  */
#line 182 "parser.y"
      { }
#line 1584 "parser.tab.c"
    break;

  case 38: /* lista_d_var: lista_id DOSPUNTOS_TK d_tipo PUNTOYCOMA_TK lista_d_var  */
#line 187 "parser.y"
                                                           { }
#line 1590 "parser.tab.c"
    break;

  case 39: /* lista_d_var: %empty  */
#line 188 "parser.y"
      { }
#line 1596 "parser.tab.c"
    break;

  case 40: /* lista_id: IDENTIFICADOR_TK COMA_TK lista_id  */
#line 192 "parser.y"
                                      { }
#line 1602 "parser.tab.c"
    break;

  case 41: /* lista_id: IDENTIFICADOR_TK  */
#line 193 "parser.y"
                       { }
#line 1608 "parser.tab.c"
    break;

  case 42: /* decl_ent_sal: decl_ent  */
#line 198 "parser.y"
             { }
#line 1614 "parser.tab.c"
    break;

  case 43: /* decl_ent_sal: decl_ent decl_sal  */
#line 199 "parser.y"
                        { }
#line 1620 "parser.tab.c"
    break;

  case 44: /* decl_ent_sal: decl_sal  */
#line 200 "parser.y"
               { }
#line 1626 "parser.tab.c"
    break;

  case 45: /* decl_ent_sal: %empty  */
#line 201 "parser.y"
     { }
#line 1632 "parser.tab.c"
    break;

  case 46: /* decl_ent: ENT_TK lista_d_var  */
#line 205 "parser.y"
                       { }
#line 1638 "parser.tab.c"
    break;

  case 47: /* decl_sal: SAL_TK lista_d_var  */
#line 209 "parser.y"
                       { }
#line 1644 "parser.tab.c"
    break;

  case 48: /* expresion: exp  */
#line 216 "parser.y"
        { }
#line 1650 "parser.tab.c"
    break;

  case 49: /* expresion: funcion_ll  */
#line 217 "parser.y"
                 { }
#line 1656 "parser.tab.c"
    break;

  case 50: /* exp: exp SUMA_TK exp  */
#line 221 "parser.y"
                    { }
#line 1662 "parser.tab.c"
    break;

  case 51: /* exp: exp RESTA_TK exp  */
#line 222 "parser.y"
                       { }
#line 1668 "parser.tab.c"
    break;

  case 52: /* exp: exp MULT_TK exp  */
#line 223 "parser.y"
                      { }
#line 1674 "parser.tab.c"
    break;

  case 53: /* exp: exp DIVARIT_TK exp  */
#line 224 "parser.y"
                         { }
#line 1680 "parser.tab.c"
    break;

  case 54: /* exp: exp MOD_TK exp  */
#line 225 "parser.y"
                     { }
#line 1686 "parser.tab.c"
    break;

  case 55: /* exp: exp DIV_TK exp  */
#line 226 "parser.y"
                     { }
#line 1692 "parser.tab.c"
    break;

  case 56: /* exp: PARENTESISA_TK exp PARENTESISC_TK  */
#line 227 "parser.y"
                                        { }
#line 1698 "parser.tab.c"
    break;

  case 57: /* exp: operando  */
#line 228 "parser.y"
               { }
#line 1704 "parser.tab.c"
    break;

  case 58: /* exp: LITERAL_TK  */
#line 229 "parser.y"
                 { }
#line 1710 "parser.tab.c"
    break;

  case 59: /* exp: RESTA_TK exp  */
#line 230 "parser.y"
                   { }
#line 1716 "parser.tab.c"
    break;

  case 60: /* exp: SUMA_TK exp  */
#line 231 "parser.y"
                  { }
#line 1722 "parser.tab.c"
    break;

  case 61: /* exp: exp Y_TK exp  */
#line 232 "parser.y"
                   { }
#line 1728 "parser.tab.c"
    break;

  case 62: /* exp: exp O_TK exp  */
#line 233 "parser.y"
                   { }
#line 1734 "parser.tab.c"
    break;

  case 63: /* exp: NO_TK exp  */
#line 234 "parser.y"
                { }
#line 1740 "parser.tab.c"
    break;

  case 64: /* exp: VERDADERO_TK  */
#line 235 "parser.y"
                   { }
#line 1746 "parser.tab.c"
    break;

  case 65: /* exp: FALSO_TK  */
#line 236 "parser.y"
               { }
#line 1752 "parser.tab.c"
    break;

  case 66: /* exp: expresion MENOR_TK expresion  */
#line 237 "parser.y"
                                   { }
#line 1758 "parser.tab.c"
    break;

  case 67: /* exp: expresion MAYOR_TK expresion  */
#line 238 "parser.y"
                                   { }
#line 1764 "parser.tab.c"
    break;

  case 68: /* exp: expresion IGUAL_TK expresion  */
#line 239 "parser.y"
                                   { }
#line 1770 "parser.tab.c"
    break;

  case 69: /* exp: expresion DIFERENTE_TK expresion  */
#line 240 "parser.y"
                                       { }
#line 1776 "parser.tab.c"
    break;

  case 70: /* exp: expresion MAYORIGUAL_TK expresion  */
#line 241 "parser.y"
                                        { }
#line 1782 "parser.tab.c"
    break;

  case 71: /* exp: expresion MENORIGUAL_TK expresion  */
#line 242 "parser.y"
                                        { }
#line 1788 "parser.tab.c"
    break;

  case 72: /* operando: IDENTIFICADOR_TK  */
#line 246 "parser.y"
                     { }
#line 1794 "parser.tab.c"
    break;

  case 73: /* operando: operando PUNTO_TK operando  */
#line 247 "parser.y"
                                 { }
#line 1800 "parser.tab.c"
    break;

  case 74: /* operando: operando CORCHETEA_TK expresion CORCHETEC_TK  */
#line 248 "parser.y"
                                                   { }
#line 1806 "parser.tab.c"
    break;

  case 75: /* operando: operando REF_TK  */
#line 249 "parser.y"
                       { }
#line 1812 "parser.tab.c"
    break;

  case 76: /* instrucciones: instruccion PUNTOYCOMA_TK instrucciones  */
#line 258 "parser.y"
                                           { }
#line 1818 "parser.tab.c"
    break;

  case 77: /* instrucciones: instruccion  */
#line 259 "parser.y"
                  { }
#line 1824 "parser.tab.c"
    break;

  case 78: /* instruccion: CONTINUAR_TK  */
#line 263 "parser.y"
                 { }
#line 1830 "parser.tab.c"
    break;

  case 79: /* instruccion: asignacion  */
#line 264 "parser.y"
                 { }
#line 1836 "parser.tab.c"
    break;

  case 80: /* instruccion: alternativa  */
#line 265 "parser.y"
                  { }
#line 1842 "parser.tab.c"
    break;

  case 81: /* instruccion: iteracion  */
#line 266 "parser.y"
                { }
#line 1848 "parser.tab.c"
    break;

  case 82: /* instruccion: accion_ll  */
#line 267 "parser.y"
                { }
#line 1854 "parser.tab.c"
    break;

  case 83: /* asignacion: operando ASIGNACION_TK expresion  */
#line 271 "parser.y"
                                     { }
#line 1860 "parser.tab.c"
    break;

  case 84: /* alternativa: SI_TK expresion FLECHA_TK instrucciones lista_opciones FSI_TK  */
#line 275 "parser.y"
                                                                  { }
#line 1866 "parser.tab.c"
    break;

  case 85: /* lista_opciones: CORCHETES_TK expresion FLECHA_TK instrucciones lista_opciones  */
#line 279 "parser.y"
                                                                  { }
#line 1872 "parser.tab.c"
    break;

  case 86: /* lista_opciones: %empty  */
#line 280 "parser.y"
      { }
#line 1878 "parser.tab.c"
    break;

  case 87: /* iteracion: it_cota_fija  */
#line 284 "parser.y"
                 { }
#line 1884 "parser.tab.c"
    break;

  case 88: /* iteracion: it_cota_exp  */
#line 285 "parser.y"
                  { }
#line 1890 "parser.tab.c"
    break;

  case 89: /* it_cota_exp: MIENTRAS_TK expresion HACER_TK instrucciones FMIENTRAS_TK  */
#line 289 "parser.y"
                                                              { }
#line 1896 "parser.tab.c"
    break;

  case 90: /* it_cota_fija: PARA_TK IDENTIFICADOR_TK ASIGNACION_TK expresion HASTA_TK expresion HACER_TK instrucciones FPARA_TK  */
#line 293 "parser.y"
                                                                                                        {  }
#line 1902 "parser.tab.c"
    break;

  case 91: /* accion_d: ACCION_TK a_cabecera bloque FACCION_TK  */
#line 299 "parser.y"
                                           { }
#line 1908 "parser.tab.c"
    break;

  case 92: /* funcion_d: FUNCION_TK f_cabecera bloque DEV_TK expresion FFUNCION_TK  */
#line 303 "parser.y"
                                                              { }
#line 1914 "parser.tab.c"
    break;

  case 93: /* a_cabecera: IDENTIFICADOR_TK PARENTESISA_TK d_par_form PARENTESISC_TK PUNTOYCOMA_TK  */
#line 307 "parser.y"
                                                                            { }
#line 1920 "parser.tab.c"
    break;

  case 94: /* f_cabecera: IDENTIFICADOR_TK PARENTESISA_TK lista_d_var PARENTESISC_TK DEV_TK d_tipo PUNTOYCOMA_TK  */
#line 311 "parser.y"
                                                                                           { }
#line 1926 "parser.tab.c"
    break;

  case 95: /* d_par_form: d_p_form PUNTOYCOMA_TK d_par_form  */
#line 315 "parser.y"
                                      { }
#line 1932 "parser.tab.c"
    break;

  case 96: /* d_par_form: %empty  */
#line 316 "parser.y"
     { }
#line 1938 "parser.tab.c"
    break;

  case 97: /* d_p_form: ENT_TK lista_id DOSPUNTOS_TK d_tipo  */
#line 320 "parser.y"
                                        { }
#line 1944 "parser.tab.c"
    break;

  case 98: /* d_p_form: SAL_TK lista_id DOSPUNTOS_TK d_tipo  */
#line 321 "parser.y"
                                          { }
#line 1950 "parser.tab.c"
    break;

  case 99: /* d_p_form: ES_TK lista_id DOSPUNTOS_TK d_tipo  */
#line 322 "parser.y"
                                         { }
#line 1956 "parser.tab.c"
    break;

  case 100: /* accion_ll: IDENTIFICADOR_TK PARENTESISA_TK l_ll PARENTESISC_TK  */
#line 326 "parser.y"
                                                        { }
#line 1962 "parser.tab.c"
    break;

  case 101: /* funcion_ll: IDENTIFICADOR_TK PARENTESISA_TK l_ll PARENTESISC_TK  */
#line 330 "parser.y"
                                                        { }
#line 1968 "parser.tab.c"
    break;

  case 102: /* l_ll: expresion COMA_TK l_ll  */
#line 334 "parser.y"
                           { }
#line 1974 "parser.tab.c"
    break;

  case 103: /* l_ll: expresion  */
#line 335 "parser.y"
                { }
#line 1980 "parser.tab.c"
    break;

  case 104: /* l_ll: %empty  */
#line 336 "parser.y"
     { }
#line 1986 "parser.tab.c"
    break;


#line 1990 "parser.tab.c"

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

#line 339 "parser.y"


