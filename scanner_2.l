%{
	// Headers standard necesarios
	#include <stdio.h> // Para poder escribir en el terminal
	#include <stdlib.h> // Para usar exit()
	#include <strings.h> // Para trabajar con cadenas de caracteres
%}



LETRADR           [a-zA-Z]
DIGITODR          [0-9]
IDDR              {LETRADR}({LETRADR}|{DIGITODR})*

EXPONENTEDR       [eE][+-]?{DIGITODR}+
LIT_ENTERODR      [+-]?{DIGITODR}+{EXPONENTEDR}?
LIT_REALDR        [+-]?{DIGITODR}+\.{DIGITODR}+{EXPONENTEDR}?|[+-]?{DIGITODR}+[rR]
LIT_BOOLEANODR    (?i:verdadero|falso)

LIT_CARACTERDR    \"[^\"]\"
LIT_CADENADR      '([^']|\/')*'

%%

[ \t\n\r]+      {}

"{"([^}]|"/}")*"}"   { printf(": COMENTARIO -> %s\n", yytext); }

(?i:accion)       {return ACCION_TK;}
(?i:algoritmo)    {return ALGORITMO_TK;}
(?i:booleano)     {return BOOLEANO_TK;}
(?i:cadena)       {return CADENA_TK;}
(?i:caracter)     {return CARACTER_TK;}
(?i:const)        {return CONST_TK;}
(?i:continuar)    {return CONTINUAR_TK;}
(?i:de)           {return DE_TK;}
(?i:dev)          {return DEV_TK;}
(?i:div)          {return DIV_TK;}
(?i:ent)          {return ENT_TK;}
(?i:entero)       {return ENTERO_TK;}
(?i:e\/s)         {return ES_TK;}
(?i:faccion)      {return FACCION_TK;}
(?i:falgoritmo)   {return FALGORITMO_TK;}
(?i:fconst)       {return FCONST_TK;}
(?i:ffuncion)     {return FFUNCION_TK;}
(?i:fmientras)    {return FMIENTRAS_TK;}
(?i:fpara)        {return FPARA_TK;}
(?i:fsi)          {return FSI_TK;}
(?i:ftipo)        {return FTIPO_TK;}
(?i:ftupla)       {return FTUPLA_TK;}
(?i:funcion)      {return FUNCION_TK;}
(?i:fvar)         {return FVAR_TK;}
(?i:hacer)        {return HACER_TK;}
(?i:hasta)        {return HASTA_TK;}
(?i:mientras)     {return MIENTRAS_TK;}
(?i:mod)          {return MOD_TK;}
(?i:no)           {return NO_TK;}
(?i:o)            {return O_TK;}
(?i:para)         {return PARA_TK;}
(?i:real)         {return REAL_TK;}
(?i:ref)          {return REF_TK;}
(?i:sal)          {return SAL_TK;}
(?i:si)           {return SI_TK;}
(?i:tabla)        {return TABLA_TK;}
(?i:tipo)         {return TIPO_TK;}
(?i:tupla)        {return TUPLA_TK;}
(?i:var)          {return VAR_TK;}
(?i:y)            {return Y_TK;}
(?i:entonces)     {return ENTONCES_TK;}
(?i:sino)         {return SINO_TK;}

:=                {return ASIGNACION_TK;}
\.\.              {return DOBLEPUNTO_TK;}
\->               {return FLECHA_TK;}
\<=               {return MENORIGUAL_TK;}
\>=               {return MAYORIGUAL_TK;}
\<\>              {return DIFERENTE_TK;}
\[\]              {return CORCHETES_TK;}

\+                {return SUMA_TK;}
\-                {return RESTA_TK;}
\*                {return MULT_TK;}
\/                {return DIV_TK;}

=                 {return IGUAL_TK;}
\<                {return MENOR_TK;}
\>                {return MAYOR_TK;}

;                 {return PUNTOYCOMA_TK;}
,                 {return COMA_TK;}
:                 {return DOSPUNTOS_TK;}
\.                {return PUNTO_TK;}

\(                {return PARENTESISA_TK;}
\)                {return PARENTESISC_TK;}
\[                {return CORCHETEA_TK;}
\]                {return CORCHETEC_TK;}



{LIT_REALDR}      { printf("LITERAL_REAL -> Valor: %f\n", atof(yytext)); }

{LIT_REALDR}      {
    yylval.literal.tipoDelValor = REAL;
    yylval.literal.valor.valorReal = atof(yytext);
    return LITERAL_TK;
}

{LIT_ENTERODR}    { printf("LITERAL_ENTERO -> Valor: %d\n", atoi(yytext)); }

{LIT_ENTERODR}    {
    yylval.literal.tipoDelValor = ENTERO;
    yylval.literal.valor.valorEntero = atoi(yytext);
    return LITERAL_TK;
}

{LIT_CARACTERDR}  { printf("LITERAL_CARACTER -> %s\n", yytext); }

{LIT_CARACTERDR}  {
    yylval.literal.tipoDelValor = CARACTER;
    yylval.literal.valor.valorCaracter = yytext[1];
    return LITERAL_TK;
}


{LIT_BOOLEANODR}  { printf("BOOLEANO -> %s\n", yytext); }

{LIT_BOOLEANODR}  {
    yylval.literal.tipoDelValor = BOOLEANO;
    if (strcasecmp(yytext, "verdadero") == 0)
        yylval.literal.valor.valorBooleano = VERDADERO;
    else
        yylval.literal.valor.valorBooleano = FALSO;
    return LITERAL_TK;
}


{LIT_CADENADR}    { printf("LITERAL_CADENA -> %s\n", yytext); }

{LIT_CADENADR} {
    yylval.literal.tipoDelValor = CADENA;
    if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL)
        errorEnScanner("No hay memoria para strdup() al leer cadena: %s\n", yytext);
    return LITERAL_TK;
}


{IDDR}            { printf("IDENTIFICADOR -> %s\n", yytext); }

{IDDR} {
    yylval.cadena = strdup(yytext);
    return IDENTIFICADOR_TK;
}

.                 {
    fprintf(stderr, "ERROR LÉXICO: Carácter no reconocido '%s'\n", yytext);
}







%%

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *f = fopen(argv[1], "r");
        if (!f) {
            perror("Error al abrir el archivo de entrada");
            return 1;
        }
        yyin = f;
    }

    yylex();
    return 0;
}
