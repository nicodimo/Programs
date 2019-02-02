//
// Created by Nico on 01/02/2019.
//

#ifndef UNTITLED1_GRAFO_H
#define UNTITLED1_GRAFO_H

#endif //UNTITLED1_GRAFO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20


typedef struct node* link;

typedef struct edge_t *Edge;

typedef struct graph_t *Graph;

Graph GraphInit();
Graph GraphLoad(char *filename1, char *filename2);
Edge EDGEcreate(char *v1, char *v2, link next);
void fileKernel(Graph g);
int check1(char *k1, char *k2, Edge e);
int check2(Edge e, char *k);
void flagResult(int flag);