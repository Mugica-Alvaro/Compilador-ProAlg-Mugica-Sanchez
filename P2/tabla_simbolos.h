#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H

#include <stdbool.h>

#define MAX_SIMBOLOS 500

typedef enum {
    NULO,
    ENTERO,
    REAL,
    BOOL,
    CHAR,
    CADENA,
    OTRO
} tipo_t;

typedef struct {
    char *nombre;
    tipo_t tipo;
} simbolo;

typedef struct {
    simbolo elementos[MAX_SIMBOLOS];
    int total;
} tabla_simbolos;

typedef struct {
    simbolo elementos[MAX_SIMBOLOS];
    int cima; // -1 cuando la pila esta vacia
} pilaSimbolos;

//tabla de simbolos 
void inicializar_tabla(tabla_simbolos *ts);
int buscar_simbolo(const tabla_simbolos *ts, const char *nombre);
int insertar_simbolo(tabla_simbolos *ts, const char *nombre, tipo_t tipo);
tipo_t obtener_tipo_simbolo(const tabla_simbolos *ts, const char *nombre);
void imprimir_tabla(const tabla_simbolos *ts);

// pila de simbolos
void inicializarPila(pilaSimbolos *pila);
bool esNulaPila(const pilaSimbolos *pila);
bool apilarSimbolo(pilaSimbolos *pila, const char *nombre, tipo_t t);
simbolo desapilarSimbolo(pilaSimbolos *pila);

#endif