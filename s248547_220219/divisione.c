//
// Created by Nico on 23/02/2019.
//
#include <stdlib.h>
#include <mem.h>
#include "divisione.h"
#define T 4

struct divisione_t {
    char sigla[C];
    int min_add[T], min_comp[T], ott_comp[T];
};

int DivisioneFile(FILE *fp, Divisione *d){
    int n, i, j;
    fscanf(fp, "%d", &n);
    d = malloc(n* sizeof(d));
    for(i=0; i<n; i++){
        fscanf(fp, "%s", d[i]->sigla);
        j=0;
        for(j=0; j<T; j++){
            fscanf(fp, "%d %d %d", d[i]->min_add, d[i]->min_comp, d[i]->ott_comp);
        }
    }
    return n;
}

Div_w init(Div_w *t, int D){
    t = malloc(D* sizeof(t));
    return *t;
}

void deleteDivision(Divisione *d, int i){
    int j;
    strcpy(d[i]->sigla, "");
    for(j = 0; j<T; j++)
        d[i]->min_add[j] = 0;
    for(j = 0; j<T; j++)
        d[i]->min_comp[j] = 0;
    for(j = 0; j<T; j++)
        d[i]->ott_comp[j] = 0;

}