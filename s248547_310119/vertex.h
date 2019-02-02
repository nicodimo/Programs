//
// Created by Nico on 02/02/2019.
//

#ifndef UNTITLED1_VERTEX_H
#define UNTITLED1_VERTEX_H

#endif //UNTITLED1_VERTEX_H

#include "grafo.h"

#define C 4


typedef struct vertex_t{
    char id[N];
} *Vertex;

Vertex VInit(void);
int VertexLoad(char *filename);
Vertex vertexRealloc(Vertex *v, int *n);
