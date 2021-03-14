/* Program to find the sum of series of n/n+1 */
// By Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 double m=0,n;

 printf("Enter the value of n: ");
 scanf("%lf",&n);

 do
 {
  m=m+n/(n+1);
  n--;
 }
 
 while (n>0);
 printf("Sum of series n/n+1 is %.2lf\n",m);
}
