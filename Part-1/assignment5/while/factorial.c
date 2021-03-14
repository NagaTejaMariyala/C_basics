/* Program to find factorial of a number */
// By M Naga Teja On 20-06-2018
#include<stdio.h>
void main()
{
 long int n,f,i=1;

 printf("Enter the value of n: ");
 scanf("%ld",&n);
 f=n;

 while (i<n)
 {
  f=f*(n-i);
  i=i+1;
 }

 printf("The value of n!= %ld\n",f);
}
