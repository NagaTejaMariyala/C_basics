/* Program to add two matrices */
// By M Naga Teja on 31-07-2018

#include"mine.h"

void main()
{
 double a[M][N],b[M][N],c[M][N];
 long int i,j,m,n;
 
 printf("Enter the number of rows of matrix: ");
 scanf("%ld",&m); 
 printf("Enter the number of columns of matrix: ");
 scanf("%ld",&n); 

 for (i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("Enter the element a[%ld][%ld] of the matrix: \n",i+1,j+1);
   scanf("%lf",&a[i][j]);
  }
 }

 for (i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("Enter the element b[%ld][%ld] of the matrix: \n",i+1,j+1);
   scanf("%lf",&b[i][j]);
  }
 }
 
 MA(a, b, c, m, n);
 
   printf("The sum matrix c is \n\n\t");
 
 for (i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("%3.2lf  ",c[i][j]); 
  }
  printf("\n\t"); 
 }
 printf("\n");
}
