#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_cuadruplas.h"

void inicializar_tc(TablaCuadruplas *tc){
    if(tc == NULL) return;
    tc->total = 0;
    tc->nextcuad = 1;
}

int nextcuad(const TablaCuadruplas *tc){
    if (tc == NULL) return 1;
    return tc->nextcuad;
}

int gen(TablaCuadruplas *tc, const char *op, const char *arg1, const char *arg2, const char *res){
    if (tc == NULL || tc->nextcuad >= MAX_CUADRUPLAS) return -1;
    int idx = tc->nextcuad++;
    tc->tabla[idx].op = op ? strdup(op) : NULL;
    tc->tabla[idx].arg1 = arg1 ? strdup(arg1) : NULL;
    tc->tabla[idx].arg2 = arg2 ? strdup(arg2) : NULL;
    tc->tabla[idx].res = res ? strdup(res) : NULL;
    tc->total++;
    return idx;
}

char *nuevo_temp(tabla_simbolos *ts, tipo_t tipo){
    static int n = 0;
    char buf[32];
    snprintf(buf, sizeof(buf), "t%d", n++);
    if (ts != NULL){
        insertar_simbolo(ts, buf, tipo);
    }
    return strdup(buf);
}

ListaCuads makelist(int quad){
    ListaCuads p = (ListaCuads)malloc(sizeof(NodoLista));
    if(p != NULL) {
        p->cuad = quad;
        p->sig = NULL;
    }
    return p;
}

ListaCuads merge(ListaCuads l1, ListaCuads l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    ListaCuads aux = l1;
    while(aux->sig != NULL){
        aux = aux->sig;
    }
    aux->sig = l2;
    return l1;
}

void backpatch(TablaCuadruplas *tc, ListaCuads lista, int destino){
    if(tc == NULL) return;
    char buf[32];
    snprintf(buf, sizeof(buf), "%d", destino);
    for (ListaCuads p = lista; p != NULL; p = p->sig){
        if(p->cuad >= 1 && p->cuad < tc->nextcuad) {
            free(tc->tabla[p->cuad].res);
            tc->tabla[p->cuad].res = strdup(buf);    
        }
    }
}

void imprimir_tabla_cuadruplas(const TablaCuadruplas *tc) {
    if (tc == NULL) return;
    printf("\n=== TABLA DE CUADRUPLAS (total: %d) ===\n", tc->total);
    for (int i = 1; i < tc->nextcuad; i++) {
        Cuadrupla c = tc->tabla[i];
        printf("%d: ", i);
        if (c.op && strcmp(c.op, ":=") == 0)
            printf("%s := %s\n", c.res ? c.res : "?", c.arg1 ? c.arg1 : "?");
        else if (c.op && strcmp(c.op, "goto") == 0)
            printf("goto %s\n", c.res ? c.res : "?");
        else if (c.op && strncmp(c.op, "if", 2) == 0)
            printf("if %s %s %s goto %s\n", c.arg1 ? c.arg1 : "?", c.op + 2, c.arg2 ? c.arg2 : "?", c.res ? c.res : "?");
        else if (c.op && (strcmp(c.op, "input") == 0 || strcmp(c.op, "output") == 0))
            printf("%s %s\n", c.op, c.arg1 ? c.arg1 : "?");
        else if (c.op && (strcmp(c.op, "inttoreal") == 0 || strcmp(c.op, "-ent") == 0 || strcmp(c.op, "-real") == 0))
            printf("%s := %s %s\n", c.res ? c.res : "?", c.op, c.arg1 ? c.arg1 : "?");
        else
            printf("%s := %s %s %s\n", c.res ? c.res : "?", c.arg1 ? c.arg1 : "?", c.op ? c.op : "?", c.arg2 ? c.arg2 : "?");
    }
}

void liberar_cuadruplas(TablaCuadruplas *tc){
    if (tc == NULL) return;
    for (int i = 1; i < tc->nextcuad; i++){
        free(tc->tabla[i].op);
        free(tc->tabla[i].arg1);
        free(tc->tabla[i].arg2);
        free(tc->tabla[i].res);
    }
    tc->total = 0;
    tc->nextcuad = 1;
}