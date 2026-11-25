#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_simbolos.h"


void inicializar_tabla(tabla_simbolos *ts) {
    ts->total = 0;
}

int buscar_simbolo(const tabla_simbolos *ts, const char *nombre) {
    for (int i = 0; i < ts->total; i++) {
        if (strcmp(ts->elementos[i].nombre, nombre) == 0) {
            return i;
        }
    }
    return -1;
}

int insertar_simbolo(tabla_simbolos *ts, const char *nombre, tipo_t tipo) {
    
    //Caso en el que ya hay en la tabla un simbolo con ese nombre, devuelvo la posicion en ese caso
    int pos = buscar_simbolo(ts, nombre);
    if (pos != -1) {
        return pos;
    }

    //Caso en el que la tabla ya esta llena y no admite mas simbolos, devuelvo -1
    if (ts->total >= MAX_SIMBOLOS) {
        fprintf(stderr, "ERROR: Tabla de simbolos llena.\n");
        return -1;
    }

    //No hay un simbolo con ese nombre y hay hueco en la tabla, lo meto y devuelvo el indice en el que lo he metido
    int indice= ts->total;
    ts->elementos[indice].nombre = strdup(nombre);
    ts->elementos[indice].tipo = tipo;
    ts->total++;
    return indice;
}


tipo_t obtener_tipo_simbolo(const tabla_simbolos *ts, const char *nombre) {
    int pos = buscar_simbolo(ts, nombre);

    //Caso no esta el simbolo en la tabla
    if (pos == -1) {
        return NULO;
    }
    //Si que esta el simbolo, devuelvo el tipo
    return ts->elementos[pos].tipo;
}


//Funcion que devuelve el nombre del tipo de dato (con el enum son simplemente numeros 0,1,2...)
static const char* texto_tipo(tipo_t t) {
    if (t == ENTERO) {
        return "entero";
    } else if (t == REAL) {
        return "real";
    } else if (t == BOOL) {
        return "booleano";
    } else if (t == CHAR) {
        return "caracter";
    } else if (t == CADENA) {
        return "cadena";
    } else if (t == OTRO) {
        return "otro";
    } else {
        return "nulo";
    }
}

//Imprime la tabla de simbolos completa (hasta el ultimo no vacio)
void imprimir_tabla(const tabla_simbolos *ts) {
    printf("\nTabla de simbolos:\n");
    printf("Posicion | Nombre | Tipo\n");
    printf("-----------------------\n");

    for (int i = 0; i < ts->total; i++) {
        printf("%d | %s | %s\n", i, ts->elementos[i].nombre, texto_tipo(ts->elementos[i].tipo));
    }
    printf("\n");
}



// pila
void inicializarPila(pilaSimbolos *pila) {
    pila->cima = -1;
}

bool esNulaPila(const pilaSimbolos *pila) {
    return pila->cima == -1;
}

bool apilarSimbolo(pilaSimbolos *pila, const char *nombre, tipo_t t) {
    if (pila->cima >= MAX_SIMBOLOS - 1) {
        fprintf(stderr,"ERROR: Pila de simbolos llena.\n");
        return false;
    }
    pila->cima++;
    pila->elementos[pila->cima].nombre = strdup(nombre);
    pila->elementos[pila->cima].tipo = t;
    return true;
}

simbolo desapilarSimbolo(pilaSimbolos *pila) {
    simbolo s = {NULL, NULO};
    if (!esNulaPila(pila)) {
        s = pila->elementos[pila->cima];
        pila->cima--;
    }
    return s;
}

