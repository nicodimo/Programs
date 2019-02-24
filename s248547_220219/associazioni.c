//
// Created by Nico on 23/02/2019.
//

#include "associazioni.h"

int AssociazioneFile(FILE *fp, Associazione *a){
    int n, i;
    fscanf(fp, "%d", &n);
    a = malloc(n* sizeof(a));
    for(i = 0; i<n ; i++){
        fscanf(fp, "%d %c %s", &a[i]->matr, &a[i]->tipo, a[i]->sigla);
    }
    return n;
}