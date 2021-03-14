/* Program to find determinant of a matrix */               
// By M Naga Teja on 02-08-2018

#include"mine.h"

void main()
{
 double a[N][N];
 long int i,j,n;
 double d; 

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
 
d=Det(a, n);
 
 printf("The determinant of the matrix is %lf \n\n\t",d);
 
 for (i=0; i<n; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("%3.2lf  ",a[i][j]); 
  }
  printf("\n\t"); 
 }
 printf("\n");
}
