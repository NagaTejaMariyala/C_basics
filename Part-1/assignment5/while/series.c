/* Program to find the sum of series of n/n+1 */
// By Naga Teja On 20-06-2018
#include<stdio.h>
void main()
{
 double m=0,n;

 printf("Enter the value of n: ");
 scanf("%lf",&n);

 while (n>0)
 {
  m=m+n/(n+1);
  n--;

 }
 printf("Sum of series n/n+1 is %.2lf\n",m);
}
