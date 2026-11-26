#ifndef TABLA_CUADRUPLAS_H
#define TABLA_CUADRUPLAS_H

#define MAX_CUADRUPLAS 1000

typedef struct{
    char *op;      /*Operador*/
    char *arg1;    /*Primer operando o variable*/
    char *arg2;    /*Segundo operando (NULL si es unaria, asignación o E/S)*/
    char *res;     /*Destino/resultado*/
} Cuadrupla;

/*Tabla general de cuádruplas*/
typedef struct {
    Cuadrupla tabla[MAX_CUADRUPLAS];
    int total;
    int nextcuad; /* Índice de la siguiente cuádrupla libre (empiezo en 1 como ejemplos)*/
} TablaCuadruplas;

/*Lista enlazada de índices de cuadruplas para backpatching*/
typedef struct NodoLista{
    int cuad;
    struct NodoLista *sig;
} NodoLista;

typedef NodoLista* ListaCuads;

/* Tabla Cuádruplas */
void inicializar_tc(TablaCuadruplas *tc);
int nextcuad(const TablaCuadruplas *tc);
int gen(TablaCuadruplas *tc, const char *op, const char *arg1, const char *arg2, const char *res);
void liberar_cuadruplas(TablaCuadruplas *tc);

/*Temporales*/
char *nuevo_temp(tabla_simbolos *ts, tipo_t tipo);


/*Para completar saltos pendientes (backpatch)*/
ListaCuads makelist(int quad);
ListaCuads merge(ListaCuads l1, ListaCuads l2);
void backpatch(TablaCuadruplas *tc, ListaCuads lista, int destino);

/*Imprimir tabla por pantalla o fichero*/
void imprimir_tabla_cuadruplas(const TablaCuadruplas *tc);

#endif
