/* Program to product two matrices */
// By M Naga Teja on 31-07-2018

#include"mine.h"

void main()
{
 double a[M][N],b[N][P],c[M][P];
 long int i,j,m,n,p;
 
 printf("Enter the number of rows of first matrix: ");
 scanf("%ld",&m); 
 printf("Enter the number of columns of first matrix: ");
 scanf("%ld",&n); 
 printf("Enter the number of columns of second matrix: ");
 scanf("%ld",&p); 

 for (i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("Enter the element a[%ld][%ld] of the matrix: \n",i+1,j+1);
   scanf("%lf",&a[i][j]);
  }
 }

 for (i=0; i<n; i++)
 {
  for(j=0; j<p; j++)
  {
   printf("Enter the element b[%ld][%ld] of the matrix: \n",i+1,j+1);
   scanf("%lf",&b[i][j]);
  }
 }
 
 MM(a, b, c, m, n, p);
 
   printf("The product matrix is \n\n\t");
 
 for (i=0; i<m; i++)
 {
  for(j=0; j<p; j++)
  {
   printf("%3.2lf  ",c[i][j]); 
  }
  printf("\n\t"); 
 }
 printf("\n");
}
