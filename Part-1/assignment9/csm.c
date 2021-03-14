/* Program to check whether a matrix is symmetric or not */
// By M Naga Teja on 31-07-2018

#include"mine.h"

void main()
{
 double a[N][N];
 long int i,j,n;
 
 printf("Enter the size of matrix: ");
 scanf("%ld",&n); 

 for (i=0; i<n; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("Enter the element a[%ld][%ld] of the matrix: \n",i+1,j+1);
   scanf("%lf",&a[i][j]);
  }
 }
 
i=CSM(a, n);
 
if (i==0)
 printf("The matrix is not symmetric\n");
else
 printf("The matrix is symmetric\n");
}
