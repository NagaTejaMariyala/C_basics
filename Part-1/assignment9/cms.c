/* Program to check whether a matrix is magic square */
// By M Naga Teja on 02-08-2018

#include"mine.h"

void main()
{
 long int a[N][N];
 long int i,j,n;
 
 printf("Enter the size of matrix: ");
 scanf("%ld",&n); 

 for (i=0; i<n; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("Enter the element a[%ld][%ld] of the matrix: \n",i+1,j+1);
   scanf("%ld",&a[i][j]);
  }
 }
 
 j= Rpt(a, n);
 if (j!=0)
 {
  i=CMS(a, n);
 
  if (i==0)
   printf("\nThe matrix is not a magic square\n\n");
  else
  {
    printf("\nThe matrix is a magic square\n\n\t");
 
   for (i=0; i<n; i++)
   {
    for(j=0; j<n; j++)
    {
     printf("%3.2ld  ",a[i][j]); 
    }
    printf("\n\t"); 
   }
   printf("\n");
  }
 }
 else
  printf("\nThe matrix is not a magic square\n\n");
}
