/* Header file for fun.c */
// By M Naga Teja on 


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define M 10
#define N 10
#define P 10


void MA(double a[M][N], double b[M][N], double c[M][N], long int m, long int n);

void MM(double a[M][N], double b[N][P], double c[M][P], long int m, long int n, long int p);

void MT(double a[M][N], double b[N][M], long int m,long int n);

long int CSM(double a[N][N], long int n);

long int CMS(long int a[N][N], long int n);

double Det(double a[N][N], long int n);
