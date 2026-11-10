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

(?i:accion)       { printf("TOKEN ACCION\n"); }
(?i:algoritmo)    { printf("TOKEN ALGORITMO\n"); }
(?i:booleano)     { printf("TOKEN BOOLEANO\n"); }
(?i:cadena)       { printf("TOKEN CADENA\n"); }
(?i:caracter)     { printf("TOKEN CARACTER\n"); }
(?i:const)        { printf("TOKEN CONST\n"); }
(?i:continuar)    { printf("TOKEN CONTINUAR\n"); }
(?i:de)           { printf("TOKEN DE\n"); }
(?i:dev)          { printf("TOKEN DEV\n"); }
(?i:div)          { printf("TOKEN DIV\n"); }
(?i:ent)          { printf("TOKEN ENT\n"); }
(?i:entero)       { printf("TOKEN ENTERO\n"); }
(?i:e\/s)         { printf("TOKEN E/S\n"); }
(?i:faccion)      { printf("TOKEN FACCION\n"); }
(?i:falgoritmo)   { printf("TOKEN FALGORITMO\n"); }
(?i:fconst)       { printf("TOKEN FCONST\n"); }
(?i:ffuncion)     { printf("TOKEN FFUNCION\n"); }
(?i:fmientras)    { printf("TOKEN FMIENTRAS\n"); }
(?i:fpara)        { printf("TOKEN FPARA\n"); }
(?i:fsi)          { printf("TOKEN FSI\n"); }
(?i:ftipo)        { printf("TOKEN FTIPO\n"); }
(?i:ftupla)       { printf("TOKEN FTUPLA\n"); }
(?i:funcion)      { printf("TOKEN FUNCION\n"); }
(?i:fvar)         { printf("TOKEN FVAR\n"); }
(?i:hacer)        { printf("TOKEN HACER\n"); }
(?i:hasta)        { printf("TOKEN HASTA\n"); }
(?i:mientras)     { printf("TOKEN MIENTRAS\n"); }
(?i:mod)          { printf("TOKEN MOD\n"); }
(?i:no)           { printf("TOKEN NO\n"); }
(?i:o)            { printf("TOKEN O\n"); }
(?i:para)         { printf("TOKEN PARA\n"); }
(?i:real)         { printf("TOKEN REAL\n"); }
(?i:ref)          { printf("TOKEN REF\n"); }
(?i:sal)          { printf("TOKEN SAL\n"); }
(?i:si)           { printf("TOKEN SI\n"); }
(?i:tabla)        { printf("TOKEN TABLA\n"); }
(?i:tipo)         { printf("TOKEN TIPO\n"); }
(?i:tupla)        { printf("TOKEN TUPLA\n"); }
(?i:var)          { printf("TOKEN VAR\n"); }
(?i:y)            { printf("TOKEN Y\n"); }
(?i:entonces)     { printf("TOKEN ENTONCES\n"); }
(?i:sino)         { printf("TOKEN SINO\n"); }

:=                { printf("OPERADOR(%s)\n", yytext); }
\.\.              { printf("OPERADOR(%s)\n", yytext); }
\->               { printf("OPERADOR(%s)\n", yytext); }
\<=               { printf("OPERADOR_RELACIONAL_(%s)\n", yytext); }
\>=               { printf("OPERADOR_RELACIONAL_(%s)\n", yytext); }
\<\>              { printf("OPERADOR(%s)\n", yytext); }
\[\]              { printf("OPERADOR(%s)\n", yytext); }

\+                { printf("OPERADOR_ARITMETICO (%s)\n", yytext); }
\-                { printf("OPERADOR_ARITMETICO (%s)\n", yytext); }
\*                { printf("OPERADOR_ARITMETICO (%s)\n", yytext); }
\/                 { printf("OPERADOR_ARITMETICO (%s)\n", yytext); }

=                 { printf("OPERADOR_RELACIONAL (%s)\n", yytext); }
\<                { printf("OPERADOR_RELACIONAL (%s)\n", yytext); }
\>                { printf("OPERADOR_RELACIONAL (%s)\n", yytext); }

;                 { printf("DELIMITADOR (%s)\n", yytext); }
,                 { printf("DELIMITADOR (%s)\n", yytext); }
:                 { printf("DELIMITADOR (%s)\n", yytext); }
\.                { printf("DELIMITADOR (%s)\n", yytext); }

\(                { printf("DELIMITADOR (%s)\n", yytext); }
\)                { printf("DELIMITADOR (%s)\n", yytext); }
\[                { printf("DELIMITADOR (%s)\n", yytext); }
\]                { printf("DELIMITADOR (%s)\n", yytext); }

{LIT_REALDR}      { printf("LITERAL_REAL -> Valor: %f\n", atof(yytext)); }
{LIT_ENTERODR}    { printf("LITERAL_ENTERO -> Valor: %d\n", atoi(yytext)); }
{LIT_CARACTERDR}  { printf("LITERAL_CARACTER -> %s\n", yytext); }
{LIT_CADENADR}    { printf("LITERAL_CADENA -> %s\n", yytext); }
{LIT_BOOLEANODR}  { printf("BOOLEANO -> %s\n", yytext); }
{IDDR}            { printf("IDENTIFICADOR -> %s\n", yytext); }

.                 { printf("ERROR: Carácter no reconocido '%s'\n", yytext); }

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
