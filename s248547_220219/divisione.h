//
// Created by Nico on 23/02/2019.
//

#ifndef ESAME22_DIVISIONE_H
#define ESAME22_DIVISIONE_H

#endif //ESAME22_DIVISIONE_H

#define C 10
#include <stdio.h>

typedef struct divisione_t *Divisione;

typedef struct div_wrapper {
    char sigla[C];
    int comp
} *Div_w;

int DivisioneFile(FILE *fp, Divisione *d);
Div_w init(Div_w *t, int D);
void setNull(Div_w *t, int D);
void deleteDivision(Divisione *d);