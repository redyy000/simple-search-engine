// COMP2521 Assignment 2

// Written by: Ryan Godakanda z5366513
// Date: November 2021

#ifndef READDATA_H
#define READDATA_H


#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list *List;

typedef struct graph *Graph;

/**
 * Creates list using URLs in collection.txt 
 */
List make_list(void);

/**
 * Creates graph using URLs in list_of_urls 
 */
Graph make_graph(List l);

/**
 * (from Stack Overflow) Code to check whether whitespace is present 
 */
int is_whitespace(char *word);

#endif
