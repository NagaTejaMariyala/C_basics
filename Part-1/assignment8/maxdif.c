/* Program to find maximum difference between 2 consecutive elements of an array */
// By M Naga Teja on 19-07-2018
#include"mine.h"
#define N 100
void main()
{
 double array[N];
 long int i,n;
 printf("Enter the size of array: ");
 scanf("%ld",&n);

 for (i=0; i<n; i++)
 {
  printf("Enter the %ldth term of array : ",i+1);
  scanf("%lf",&array[i]);
 }

 printf("The maximum difference between 2 consecutive nos: %lf\n",D (array,n));
}
