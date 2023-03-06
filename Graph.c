// Implementation of the Directed unweighted Graph ADT
// Uses an adjacency matrix

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"

struct graph {
    int nV;         // #vertices
    int nE;         // #edges
    int **edges; // adjacency matrix storing positive weights
};

/**
 * Checks whether vertex v is valid
 * (this function is local to this ADT)
 */
static int validVertex(Graph g, Vertex v);

/**
 * Creates a new instance of a graph
 */
Graph GraphNew(int nV) {
    assert(nV > 0);

    Graph g = malloc(sizeof(*g));
    assert(g != NULL);

    g->nV = nV;
    g->nE = 0;

    g->edges = malloc(nV * sizeof(int *));
    assert(g->edges != NULL);

    for (int i = 0; i < nV; i++) {
        g->edges[i] = calloc(nV, sizeof(int));
        assert(g->edges[i] != NULL);
    }

    return g;
}

/**
 * Frees all memory associated with the given graph
 */
void GraphFree(Graph g) {
    for (int i = 0; i < g->nV; i++) {
        free(g->edges[i]);
    }
    free(g->edges);
    free(g);
}

/**
 * Returns the number of vertices in the graph
 */
int GraphNumVertices(Graph g) {
    return g->nV;
}

/**
 * Inserts edge within graph.
 * Returns true if successful, false if unsuccessful
 */
bool GraphInsertEdge(Graph g, Edge e) {
    assert(validVertex(g, e.v));
    assert(validVertex(g, e.w));
    assert(e.v != e.w);

    if (g->edges[e.v][e.w] == 0) {
        g->edges[e.v][e.w] = 1;
        g->nE++;
        return true;
    } else {
        return false;
    }
}

/**
 * Returns 1 if edge from v to w exists, or 0 otherwise
 */
int GraphIsAdjacent(Graph g, Vertex v, Vertex w) {
    assert(validVertex(g, v));
    assert(validVertex(g, w));
    
    return g->edges[v][w];
}

/**
 * Checks whether vertex v is valid
 * (this function is local to this ADT)
 */
static int validVertex(Graph g, Vertex v) {
    return v >= 0 && v < g->nV;
}

