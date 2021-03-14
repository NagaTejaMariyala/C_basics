/* Program to find factorial of a number */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 long int n,f,i=1;

 printf("Enter the value of n: ");
 scanf("%ld",&n);
 f=n;

 do
 {
  f=f*(n-i);
  i=i+1;
 }
 while (i<n);

 printf("The value of n!= %ld\n",f);
}
