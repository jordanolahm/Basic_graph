
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int eh_ponderado;
    int nro_vertices;
    int grau_max;
    int** arestas;
    float** pesos;
    int* grau;
}grafo;

grafo* cria_grafo(int nro_vertices, int grau_max, int eh_ponderado);
void libera_grafo(grafo* gr);
int remove_aresta(grafo* gr, int orig, int dest, int eh_digrafo);
int insere_aresta(grafo* gr, int orig, int dest, int eh_digrafo, float peso);

