%{
	#include <stdio.h>
	#include <stdlib.h>

	#include "tabla_simbolos.h"
    #include "tabla_cuadruplas.h"


	//#include "nombresDeTipos.h"
	//#include "literal.h"
	//#include "tablaDeConstantes.h"


	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada

	extern int yylineno;
	extern char *yytext;

	tabla_simbolos miTablaSimbolos;
    tabla_cuadruplas miTablaCuadruplas;

	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}

%union {
	char *pcadena;
	tipo_t ptipo;
	pilaSimbolos palid;
}

//DECLARAR LOS TOKENS

%token ALGORITMO_TK
%token PUNTOYCOMA_TK
%token FALGORITMO_TK
%token TIPO_TK
%token FTIPO_TK
%token CONST_TK
%token FCONST_TK
%token VAR_TK
%token FVAR_TK

/*
%token IDENTIFICADOR_TK
*/

%token IGUAL_TK
%token TUPLA_TK
%token FTUPLA_TK
%token TABLA_TK
%token DE_TK
%token REF_TK
%token DOBLEPUNTO_TK
%token LITERAL_TK
%token DOSPUNTOS_TK
%token ENTERO_TK
%token REAL_TK
%token BOOLEANO_TK
%token CADENA_TK
%token CARACTER_TK
%token COMA_TK
%token ENT_TK
%token SAL_TK
%token ES_TK
%token SUMA_TK
%token RESTA_TK
%token MULT_TK
%token DIVARIT_TK
%token MOD_TK
%token DIV_TK
%token PARENTESISA_TK
%token PARENTESISC_TK
%token CORCHETEA_TK
%token CORCHETEC_TK
%token CORCHETES_TK
%token PUNTO_TK
%token Y_TK
%token O_TK
%token NO_TK
%token MENOR_TK
%token MAYOR_TK
%token MENORIGUAL_TK
%token MAYORIGUAL_TK
%token DIFERENTE_TK
%token CONTINUAR_TK
%token ASIGNACION_TK
%token SI_TK
%token FLECHA_TK
%token FSI_TK
%token MIENTRAS_TK
%token HACER_TK
%token FMIENTRAS_TK
%token PARA_TK
%token HASTA_TK
%token FPARA_TK
%token ACCION_TK
%token FACCION_TK
%token FUNCION_TK
%token DEV_TK
%token FFUNCION_TK
%token COMENTARIO_TK
%token VERDADERO_TK
%token FALSO_TK


%type <ptipo> tipo_base d_tipo
%token <pcadena> IDENTIFICADOR_TK
%type <palid> lista_id

//DECLARAR LAS PRECEDENCIAS (LEFT, RIGHT, NONASOC...)
%left O_TK
%left Y_TK
%right NO_TK
%nonassoc MENOR_TK MAYOR_TK MENORIGUAL_TK MAYORIGUAL_TK IGUAL_TK DIFERENTE_TK
%left SUMA_TK RESTA_TK
%left MULT_TK DIVARIT_TK DIV_TK MOD_TK
%left REF_TK CORCHETEA_TK PUNTO_TK
%left MENOSU
%%



//GRAMATICA LENGUAJE ProAlg
desc_algoritmo:
    ALGORITMO_TK IDENTIFICADOR_TK PUNTOYCOMA_TK cabecera_alg bloque_alg FALGORITMO_TK PUNTO_TK { }
;

cabecera_alg:
    decl_globales decl_a_f decl_ent_sal COMENTARIO_TK { }
;

bloque_alg:
    bloque COMENTARIO_TK { }
;

decl_globales:
    declaracion_tipo decl_globales { }
    | declaracion_const decl_globales { }
    | { }
;

decl_a_f:
    accion_d decl_a_f { }
    | funcion_d decl_a_f { }
    | { }
;

bloque:
    declaraciones instrucciones { }
;

declaraciones:
    declaracion_tipo declaraciones { }
    | declaracion_const declaraciones { }
    | declaracion_var declaraciones { }
    | { }
;


//DECLARACIONES

declaracion_tipo:
    TIPO_TK lista_d_tipo FTIPO_TK PUNTOYCOMA_TK { }
;

declaracion_const:
    CONST_TK lista_d_cte FCONST_TK PUNTOYCOMA_TK { }
;

declaracion_var:
    VAR_TK lista_d_var FVAR_TK PUNTOYCOMA_TK { }
;


lista_d_tipo:
    IDENTIFICADOR_TK IGUAL_TK d_tipo PUNTOYCOMA_TK lista_d_tipo { }
    | { }
;

d_tipo:
    TUPLA_TK lista_campos FTUPLA_TK { $$ = OTRO; }
    | TABLA_TK CORCHETEA_TK expresion_t DOBLEPUNTO_TK expresion_t CORCHETEC_TK DE_TK d_tipo { $$ = OTRO; }
    | IDENTIFICADOR_TK { $$ = OTRO; }
    | expresion_t DOBLEPUNTO_TK expresion_t { $$ = OTRO; }
    | REF_TK d_tipo { $$ = OTRO; }
    | tipo_base { $$ = $1; }
;

expresion_t:
    expresion { }
    | LITERAL_TK { }
;

lista_campos:
    IDENTIFICADOR_TK DOSPUNTOS_TK d_tipo PUNTOYCOMA_TK lista_campos { }
    | { }
;

tipo_base:
    ENTERO_TK   { $$ = ENTERO; }
    | REAL_TK     { $$ = REAL; }
    | BOOLEANO_TK { $$ = BOOL; }
    | CADENA_TK   { $$ = CADENA; }
    | CARACTER_TK { $$ = CHAR; }
;


lista_d_cte:
    IDENTIFICADOR_TK IGUAL_TK LITERAL_TK PUNTOYCOMA_TK lista_d_cte { }
    | { }
;

lista_d_var:
    lista_id DOSPUNTOS_TK d_tipo PUNTOYCOMA_TK lista_d_var {
        while (!esNulaPila(&$1)) {
            simbolo s = desapilarSimbolo(&$1);
            if (s.nombre != NULL) {
                if (buscar_simbolo(&miTablaSimbolos, s.nombre) != -1) {
                    printf("ERROR SEMANTICO: '%s' ya estaba declarado.\n", s.nombre);
                } else {
                    insertar_simbolo(&miTablaSimbolos, s.nombre, $3);
                }
                free(s.nombre);
            }
        }
    }
    | { }
;

lista_id:
    IDENTIFICADOR_TK COMA_TK lista_id {
        $$ = $3;
        apilarSimbolo(&$$, $1, NULO);
    }
    | IDENTIFICADOR_TK {
        inicializarPila(&$$);
        apilarSimbolo(&$$, $1, NULO);
    }
;

decl_ent_sal:
    decl_ent { }
    | decl_ent decl_sal { }
    | decl_sal { }
    |{ }
;

decl_ent:
    ENT_TK lista_d_var { }
;

decl_sal:
    SAL_TK lista_d_var { }
;


// EXPRESIONES

expresion:
    exp { }
    | funcion_ll { }
;

exp:
    exp SUMA_TK exp { }
    | exp RESTA_TK exp { }
    | exp MULT_TK exp { }
    | exp DIVARIT_TK exp { }
    | exp MOD_TK exp { }
    | exp DIV_TK exp { }
    | PARENTESISA_TK exp PARENTESISC_TK { }
    | operando { }
    | LITERAL_TK { }
    | RESTA_TK exp %prec MENOSU{ }
    | SUMA_TK exp %prec MENOSU{ }
    | exp Y_TK exp { }
    | exp O_TK exp { }
    | NO_TK exp { }
    | VERDADERO_TK { }
    | FALSO_TK { }
    | expresion MENOR_TK expresion { }
    | expresion MAYOR_TK expresion { }
    | expresion IGUAL_TK expresion { }
    | expresion DIFERENTE_TK expresion { }
    | expresion MAYORIGUAL_TK expresion { }
    | expresion MENORIGUAL_TK expresion { }
;

operando:
    IDENTIFICADOR_TK { }
    | operando PUNTO_TK operando { }
    | operando CORCHETEA_TK expresion CORCHETEC_TK { }
    | operando REF_TK  { }
;




//INSTRUCCIONES

instrucciones:
    instruccion PUNTOYCOMA_TK instrucciones{ }
    | instruccion { }
;

instruccion:
    CONTINUAR_TK { }
    | asignacion { }
    | alternativa { }
    | iteracion { }
    | accion_ll { }
;

asignacion:
    operando ASIGNACION_TK expresion { }
;

alternativa:
    SI_TK expresion FLECHA_TK instrucciones lista_opciones FSI_TK { }
;

lista_opciones:
    CORCHETES_TK expresion FLECHA_TK instrucciones lista_opciones { }
    | { }
;

iteracion:
    it_cota_fija { }
    | it_cota_exp { }
;

it_cota_exp:
    MIENTRAS_TK expresion HACER_TK instrucciones FMIENTRAS_TK { }
;

it_cota_fija:
    PARA_TK IDENTIFICADOR_TK ASIGNACION_TK expresion HASTA_TK expresion HACER_TK instrucciones FPARA_TK {  }
;


//ACCIONES Y FUNCIONES
accion_d:
    ACCION_TK a_cabecera bloque FACCION_TK { }
;

funcion_d:
    FUNCION_TK f_cabecera bloque DEV_TK expresion FFUNCION_TK { }
;

a_cabecera:
    IDENTIFICADOR_TK PARENTESISA_TK d_par_form PARENTESISC_TK PUNTOYCOMA_TK { }
;

f_cabecera:
    IDENTIFICADOR_TK PARENTESISA_TK lista_d_var PARENTESISC_TK DEV_TK d_tipo PUNTOYCOMA_TK { }
;

d_par_form:
    d_p_form PUNTOYCOMA_TK d_par_form { }
    |{ }
;

d_p_form:
    ENT_TK lista_id DOSPUNTOS_TK d_tipo { }
    | SAL_TK lista_id DOSPUNTOS_TK d_tipo { }
    | ES_TK lista_id DOSPUNTOS_TK d_tipo { }
;

accion_ll:
    IDENTIFICADOR_TK PARENTESISA_TK l_ll PARENTESISC_TK { }
;

funcion_ll:
    IDENTIFICADOR_TK PARENTESISA_TK l_ll PARENTESISC_TK { }
;

l_ll:
    expresion COMA_TK l_ll { }
    | expresion { }
    |{ }
;

%%

int main(int argc, char **argv) {
	inicializar_tabla(&miTablaSimbolos);

	#if defined YYDEBUG
	yydebug = 1;
	#endif

	++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
		if (!yyin) {
			perror("Error al abrir el archivo de entrada");
			return 1;
		}
	} else {
		yyin = stdin;
	}

	int resultado = yyparse();

	if (resultado == 0) {
		printf("\n[OK] Sintaxis correcta.\n");
		imprimir_tabla(&miTablaSimbolos);
	} else {
		printf("\n[ERROR] Error de sintaxis.\n");
	}

	if (argc > 0 && yyin != NULL) {
		fclose(yyin);
	}

	return resultado;
}

void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}


