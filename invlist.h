// COMP2521 Assignment 2

// Written by: Ryan Godakanda z5366513
// Date: November 2021

#ifndef INVLIST_H
#define INVLIST_H

#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct invlist *InvList;

typedef struct node *Node;

/**
 * Creates a new empty list
 */
InvList InvListNew(void);

/**
 * Frees all resources associated with the given list
 */
void InvListFree(InvList l);

/**
 * Append one URL to the end of a list.
 */
void InvListAppend(InvList l, char *u);

/**
 * Returns the size of the InvList
 */
int InvListSize(InvList l);

/**
 * Searches for url in InvList.
 * Returns true if successful, false if unsuccessful
 */
bool search_Invlist(InvList l, char *u);

/**
 * Increments tally of node containing url.
 */
void increment_tally(InvList l, char *u);

/**
 * Prints urls to stdout
 */
void print_urls(InvList l);

/**
 * Sorts InvList by tally
 */
void sortTally(InvList l);

/**
 * Sorts InvList by page rank
 */
void sortPagerank(InvList l);

/**
 * Stores ranks of each url in InvList 
 */
void assign_pagerank(InvList l, char *path, double rank);

/**
 * Sorts InvList by alphabetical order
 */
void sortAlphabetic(InvList l);
#endif
