/* Program to find sum of cubes of first n numbers */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 long int p=0,n;

 printf("Enter the value of n:");
 scanf("%ld",&n);

 for (;n>0;n--)
 {
  p=p+(n*n*n);
 }

 printf("The sum of cubes of first n numbers is %d\n",p);
}
