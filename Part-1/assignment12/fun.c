/* Program to contain all functions for dynamic allocation of memory */
// By M Naga Teja on 04-09-2018

#include"mine.h"


// Matrix allocation function

int **init(int **p, int m, int n)
{
    int i;
    p=calloc(m,sizeof(int *));

    for(i=0;i<m;i++)
        p[i]=calloc(n,sizeof(int));

    return p;
}


// Output matrix function

void out(int **p, int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",p[i][j]);
        printf("\n\n");

    }
}


//  in matrix function

void in(int **p, int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&p[i][j]);
     
}


// Free matrix function

void Free(int **p, int m, int n)
{
    int i;
    for(i=0;i<m;i++)
        free(p[i]);
    free(p);
}


// Trace function

int trace(int **p ,int m, int n)
{
    int i,j,tr=0;
    if(m!=n)
    {
        printf("Sorry! The matrix is not a square matrix.\n");
        return -1;
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(i==j)
                tr+=p[i][j];
    return tr;
}


// Check upper triangular matrix function

int cut(int **p, int m, int n)
{
    if(m!=n)
        return 0;
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<i;j++)
            if(p[i][j]!=0)
                return 0;
    return 1;
}


// Sum of matrices function

void Sum(int **p, int **q, int m, int n)
{
    int i,j,**s;
    s=calloc(m,sizeof(int *));
    for(i=0;i<m;i++)
        s[i]=calloc(n,sizeof(int));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            s[i][j]=p[i][j]+q[i][j];

    out(s,m,n);
}


// pro of matrices function

void pro(int **p, int **q, int m, int n, int o)
{
    int i,j,k,**P;
    P=calloc(m,sizeof(int *));
    for(i=0;i<m;i++)
        P[i]=calloc(o,sizeof(int));
    for(i=0;i<m;i++)
        for(j=0;j<o;j++)
            for(k=0,P[i][j]=0;k<n;k++)
                P[i][j]+=p[i][k]*q[k][j];
    out(P,m,o);
}

