//
// Created by Nico on 02/02/2019.
//

#include "vertex.h"

Vertex VInit(void){
    Vertex v = malloc(C*sizeof(v));
    return v;
}

int VertexLoad(char *filename){
    Vertex v = VInit();
    FILE *fp = fopen(filename, "r");
    int n = C, i = 0;
    char id[N];

    while(fscanf(fp, "%s", id)==1){
        if(i>=n)
            vertexRealloc(&v, &n);
        strcpy(v[i].id, id);
        i++;
    }
    return n;
}

Vertex vertexRealloc(Vertex *v, int *n){
    *n = (*n) *2;
    v = realloc(v, (*n) * sizeof(v));
    return *v;
}