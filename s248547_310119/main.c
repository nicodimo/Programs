#include <stdio.h>
#include "grafo.h"

int main(int argc, char **argv) {

    char nome1[N], nome2[N];
    Graph g;

    strcpy(nome1, argv[1]);
    strcpy(nome2, argv[2]);


    g = GraphLoad(nome1, nome2);
    fileKernel(g);

    return 0;
}