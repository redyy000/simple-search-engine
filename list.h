// COMP2521 Assignment 2

// Written by: Ryan Godakanda z5366513
// Date: November 2021

#ifndef LIST_H
#define LIST_H


#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Vertex;

typedef struct list *List;

typedef struct node *Node;

/**
 * Creates a new empty list
 */
List ListNew(void);

/**
 * Frees all resources associated with the given list
 */
void ListFree(List l);

/**
 * Append one URL to the end of a list.
 */
void ListAppend(List l, char *u);

/**
 * Returns the size of the list
 */
int ListSize(List l);

/**
 * Returns the url associated with the supplied vertex
 */
char *getUrlFromVertex(List l, Vertex v);

/**
 * Returns the vertex associated with the supplied url
 */
Vertex getVertexFromUrl(List l, char *u);

#endif
