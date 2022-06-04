#include "grafos.h"

grafo* cria_grafo(int nro_vertices, int grau_max, int eh_ponderado)
{
    grafo *gr;

    gr = (grafo*) malloc(sizeof(grafo));

    if(gr != NULL)
    {
        int i;
        gr->nro_vertices = nro_vertices;
        gr->grau_max = grau_max;
        gr->eh_ponderado = (eh_ponderado != 0) ?: 0;
        gr->grau = (*int) calloc(nro_vertices, sizeof(int));
        gr->arestas = (int**) calloc(nro_vertices, sizeof(int));

        for(i = 0; i < nro_vertices; i++)
            gr->arestas[i] = (*int) malloc(grau_max*sizeof(int));
        if()
        for(i = 0; i < nro_vertices; i++)
            gr->pesos[i] = (float**)malloc(nro_vertices * sizeof(float*));
    }
}
