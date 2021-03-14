/* Program to find Arithmetic mean, Geometric mean, Harmonic mean and Range of an array */
// By M Naga Teja on 
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

 printf("The arithmetic mean is %lf\n the geometric mean is %lf\n the harmonic mean is %lf\n the range is %lf\n",\
AM ( array, n),GM ( array, n),HM ( array, n),R ( array, n));
}
