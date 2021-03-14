/* Program to search an array using linear search*/
// By M Naga Teja on 24-07-2018
#include"mine.h"
#define N 100
void main()
{
 long int a[N];
 long int h,n,i,k;

 printf("Enter the size of array: ");
 scanf("%ld",&n);
 
 for (i=0; i<n; i++)
 {
  printf("Enter the %ldth value: ",i+1);
  scanf("%ld",&a[i]);
 }
 
 printf("Enter the key: ");
 scanf("%ld",&k);
 h=Ls (a, n, k);
 if (h!=-1)
 printf("The position of key in array is:%ld \n",h+1);
 else
 printf("Key is not in array\n");
} 
