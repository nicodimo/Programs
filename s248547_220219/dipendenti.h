//
// Created by Nico on 22/02/2019.
//

#ifndef ESAME22_DIPENDENTI_H
#define ESAME22_DIPENDENTI_H

#endif //ESAME22_DIPENDENTI_H

#include <stdio.h>
#include <stdlib.h>
#define N 20

typedef struct dipendenti_t {
    char nome[N], cognome[N];
    int matr;
    int c_a, c_o, c_t, c_i;
} Dipendente;

int DipendentiFile(FILE *fp, Dipendente *d);