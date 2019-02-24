//
// Created by Nico on 22/02/2019.
//


#include "dipendenti.h"

int DipendentiFile(FILE *fp, Dipendente *d){
    int n = 0, i;

    fscanf(fp, "%d", &n);
    d = malloc(n* sizeof(Dipendente));
    for( i=0; i<n; i++){
        fscanf(fp, "%d %s %s %d %d %d %d", &d[i].matr, d[i].nome, d[i].cognome, &d[i].c_o, &d[i].c_a, &d[i].c_t, &d[i].c_i);
    }
    return n;
}
