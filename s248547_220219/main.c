#include <stdio.h>
#include <mem.h>
#include "associazioni.h"
#define N 20
int main(int argc, char **argv) {

    Divisione *div = NULL;
    Dipendente *dip = NULL;
    Associazione *a = NULL;
    char fp1[N], fp2[N], fp3[N];
    int n_as, n_div, n_dip;

    if(argc!=4){
        printf("Errore!");
        return -1;
    }
    strcpy(fp1, argv[1]);
    strcpy(fp2, argv[2]);
    strcpy(fp3, argv[3]);

    FILE *File1 = NULL, *File2 = NULL, *File3 = NULL;

    File1 = fopen(fp1, "r");
    File2 = fopen(fp2, "r");
    File3 = fopen(fp3, "r");

    n_dip = DipendentiFile(File1, dip);
    n_div = DivisioneFile(File2, div);
    n_as = AssociazioneFile(File3, a);





    return 0;
}