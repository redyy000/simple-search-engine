// COMP2521 Assignment 2

// Written by: Ryan Godakanda z5366513
// Date: November 2021

#ifndef PAGERANK_H
#define PAGERANK_H


#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ranks {
    char *url;
    double pRank;
    double prevpRank;
    double outlinks;
    int inlinks;
} Ranks;

typedef struct RankList {
    int urlCount;
    Ranks *data;

} RankList;

/**
 * Calculates the page rank formula
 */
void doPageRank(Graph g, RankList urlinfo, double d, double diffPR, 
                int maxIterations, int N, int lnks[N][N]);

/**
 * Calculates W(in) for two specified urls
 */
double wIn(int k, int w, Graph g, RankList urlinfo);

/**
 * Calculates W(out) for two specified urls
 */
double wOut(int k, int w, Graph g, RankList urlinfo);

/**
 * Sorts the Rank List via bubble sort
 */
void BubbleSort(RankList urlinfo, int N);

/**
 * Exports the final list of formatted page ranks to pagerankList.txt
 */
void sendFinalPageRank(Graph g, List l, RankList urlinfo, int N); 

#endif
