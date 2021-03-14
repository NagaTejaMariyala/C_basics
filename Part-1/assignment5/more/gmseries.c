/* Program to find sum of first n terms in geometric series using for loop*/
// By M Naga Teja On 26-06-2018
#include<stdio.h>
void main()
{
 double n,p,q,r;
 printf("Enter the first term of the series: ");
 scanf("%lf",&p);
 printf("Enter the multiplicat: ");
 scanf("%lf",&r);
 printf("Enter the value of n: ");
 scanf("%lf",&n);
 for (q=0; n>0; n--)
 {
  q+=p;
  p*=r;
 }
 printf("Sum of first n terms is %lf\n",q);
}
