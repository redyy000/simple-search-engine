// Interface to the Directed unweighted Graph ADT
// - Vertices are identified by integers between 0 and nV - 1,
//   where nV is the number of vertices in the graph
// - Weights are either 1 or 0
// - Self-loops are not allowed


#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>

typedef struct graph *Graph;

typedef int Vertex;

// edges are pairs of vertices (end-points)
typedef struct Edge {
    Vertex v;
    Vertex w;
} Edge;

/**
 * Creates a new instance of a graph
 */
Graph  GraphNew(int nV);

/**
 * Frees all memory associated with the given graph
 */
void   GraphFree(Graph g);

/**
 * Returns the number of vertices in the graph
 */
int    GraphNumVertices(Graph g);

/**
 * Inserts edge within graph.
 * Returns true if successful, false if unsuccessful
 */
bool   GraphInsertEdge(Graph g, Edge e);

/**
 * Returns 1 if edge from v to w exists, or 0 otherwise
 */
int GraphIsAdjacent(Graph g, Vertex v, Vertex w);

#endif
