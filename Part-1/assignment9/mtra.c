/* Program to find transpose of a matrix */
// By M Naga Teja on 31-07-2018

#include"mine.h"

void main()
{
 double a[M][N],b[N][M];
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
 
 MT(a, b, m, n);
 
   printf("The transpose matrix is \n\n\t");
 
 for (i=0; i<n; i++)
 {
  for(j=0; j<m; j++)
  {
   printf("%3.2lf  ",b[i][j]); 
  }
  printf("\n\t"); 
 }
 printf("\n"); 
}
