//
// Created by Nico on 01/02/2019.
//


#include "grafo.h"
#include "vertex.h"

struct edge_t {
    char idv1[N], idv2[N];
    link next;
    link head;
};

struct graph_t {
    Edge e;
    Vertex *v;
    int n;
};

Graph GraphInit(){
    Graph g = malloc(sizeof(Graph));
    return g;
}

Graph GraphLoad(char *filename1, char *filename2){
    Graph g = GraphInit();
    link head = NULL;
    link next = NULL;
    char v1[N], v2[N];
    FILE *fp = fopen(filename1, "r");
    while(fscanf(fp,"%s %s", v1, v2)==2){
        next = EDGEcreate(v1, v2, next);
    }

    g->n = VertexLoad(filename2);
    return g;
}

Edge EDGEcreate(char *v1, char *v2, link next){
    Edge e = malloc(sizeof(Edge));
    strcpy(e->idv1, v1);
    strcpy(e->idv2, v2);
    e->next = next;
    return e;
}

void fileKernel(Graph g){

    int flag = 0;
    for (int i = 0; i < g->n; i++) {

        if(check1(g->v[i]->id, g->v[i+1]->id, g->e)== 0 && check2(g->e, g->v[i]->id) == 1)
            flag = 0;
        else flag = 1;
    }
    flagResult(flag);
}

int check1(char *k, char *k2, Edge e){
    link x;
    for(x = e->head;x != NULL; x = e->next){
        if(strcmp(k, e->idv1) == 0 || strcmp(k2, e->idv2) == 0)
            return 1;
        if(strcmp(k2, e->idv1) == 0 || strcmp(k, e->idv2) == 0)
            return 1;
    }
    return 0;
}

int check2(Edge e, char *k){
    link x;
    for( x = e->head; x != NULL; x = e->next){
        if(strcmp(k, e->idv1) == 0)
            return 1;
    }
    return 0;
}

void flagResult(int flag){
    if(flag == 0)
        printf("I nodi verificati fanno parte del kernel!\n");
}