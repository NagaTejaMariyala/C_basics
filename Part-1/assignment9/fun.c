/* Program containing the functions of assignment9 */
// By M Naga Teja on 31-07-2018

#include"mine.h"


// Matrix Addition function

void MA(double a[M][N], double b[M][N], double c[M][N], long int m, long int n)
{
 int i,j;
 for (i=0; i<m; i++)
 {
  for (j=0; j<n; j++)
  {
   c[i][j]= a[i][j]+b[i][j];
  }
 }
}

// Matrix Multiplication function

void MM(double a[M][N], double b[N][P], double c[M][P], long int m, long int n, long int p)
{
 int i,j,k;
 for (i=0; i<m; i++)
 {
  for (j=0; j<p; j++)
  {
   c[i][j]=0;
   for (k=0; k<n; k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
 }
}

// Matrix Transpose function

void MT(double a[M][N], double b[N][M], long int m, long int n)
{
 int i,j;
 for (i=0; i<m; i++)
 {
  for (j=0; j<n; j++)
   b[j][i]=a[i][j];
 }
}

// Symmetry of matrix function

long int CSM(double a[N][N], long int n)
{
 long int i,j;
 for (i=0; i<n; i++)
 {
  for (j=0; j<n; j++)
  {
   if (a[i][j]!=a[j][i])
    return 0;
  }
 }
 return 1;
}

// Check repeat function

long int Rpt(long int a[N][N], long int n)
{
 long int i,j,k,l;
 for (i=0; i<n; i++)
 {
  for (j=0; j<n; j++)
  {
   for (k=i+1; k<n; k++)
   {
    for (l=j+1; l<n; l++)
    {
     if (a[i][j]==a[k][l])
      return 0;
    }
   }
  }
 }
 return 1;
}

// Check magic square function

long int CMS(long int a[N][N], long int n)
{
 long int i,j,k,s;
 for (i=0,k=0; i<n; i++)
  k+= a[i][i];
 for(i=0; i<n; i++)
 {
  s=0;
  for (j=0; j<n; j++)
   s+= a[i][j];
  if (s!=k)
   return 0;
 }
 for(i=0; i<n; i++)
 {
  s=0;
  for (j=0; j<n; j++)
   s+= a[j][i];
  if (s!=k)
   return 0;
 }
 s=0;
 for(i=0; i<n; i++)
 {
  for (j=0; j<n; j++)
  { 
   if (i+j==n-1)
    s+= a[i][j];
  }
 }
  if (s!=k)
   return 0;
 return 1;
}

// Determinant function

double Det(double a[][N], long int n)
{
 long int i,j,c,x,y;
 double b[n][n],s=0;
 if (n==1)
  return a[0][0];

 for(c=0; c<n; c++)
 {
  x=0;
  y=0;
  for(i=0; i<n; i++)
  {
   for (j=0; j<n; j++)
   {
    if (i==c||j==n-1)
     continue;
    b[x][y]=a[i][j];
    y++;
    if (y>=n-1)
    {
     y=0;
     x++;
    }
   }
  }
  s+= pow(-1,c+n-1)*a[c][n-1]*Det( b, n-1);
 }
 return s;
}

