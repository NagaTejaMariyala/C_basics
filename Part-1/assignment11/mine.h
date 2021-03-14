/* Header file for stacks and qs */
// By M Naga Teja on 25-08-2018

#include<stdio.h>
#define N 10

void stin(int*);

void push(int*, int*, int);

int pop(int*, int*);

void qin(int*, int*);

void enq(int*, int*, int*, int);

int deq(int*, int*, int*);

void cqin(int*, int*);

void cenq(int*, int*, int*, int);

int cdeq(int*, int*, int*);

void prtcq(int *, int , int);

int isemptycq(int*, int*, int*);

