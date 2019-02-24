//
// Created by Nico on 23/02/2019.
//

#ifndef ESAME22_ASSOCIAZIONI_H
#define ESAME22_ASSOCIAZIONI_H

#endif //ESAME22_ASSOCIAZIONI_H

#include "divisione.h"
#include "dipendenti.h"


typedef struct associazioni_t {
    char sigla[C];
    int matr;
    char tipo;
} *Associazione;

int AssociazioneFile(FILE *fp, Associazione *a);