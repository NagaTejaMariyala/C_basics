/* Program to sort an array using selection sort */
// By M Naga Teja on 18-07-2018
#include"mine.h"
#define N 100
void main()
{
 long int a[N];
 long int n,i;

 printf("Enter the size of array: ");
 scanf("%ld",&n);
 
 for (i=0; i<n; i++)
 {
  printf("Enter the %ldth value: ",i+1);
  scanf("%ld",&a[i]);
 }
 
 printf("The array is : ");
 for (i=0; i<n; i++)
  printf("%ld  ",a[i]);
 printf("\n");
 
 SS (a, n);
 printf("The sorted array is : ");
 for (i=0; i<n; i++)
  printf("%ld  ",a[i]);
 printf("\n");
} 
