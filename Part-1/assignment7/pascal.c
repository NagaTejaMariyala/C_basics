/* Program to print pascal triangle for input n */
// By M Naga Teja On 04-07-2018
#include"mine.h"
void main()
{
 long int n,i,k;
 printf("Enter the value of n: ");
 scanf("%ld",&n);
 
 for (k=0; k<=n; k++)
 {

  for (i=0; i<n-k; i++)
   printf("\t");

  for (i=0; i<=k; i++)
   printf("%d\t\t",C(k,i));

  printf("\n");

 }
}
