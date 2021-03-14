/* Program to find factorial of a number */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 long int n,f,i;

 printf("Enter the value of n: ");
 scanf("%ld",&n);
 f=n;

 for (i=1;i<n;i++)
 {
  f=f*(n-i);
 }

 printf("The value of n!= %ld\n",f);
}
