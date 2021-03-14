/* Program to find average of atmost n positive numbers*/
// By M Naga Teja On 26-06-2018
#include<stdio.h>
void main()
{
 double c;
 int b,a,d;
 printf("Enter the value of n: ");
 scanf("%ld",&a);
 d=a;
 for (c=0;a>0;a--)
 {
  printf("Enter the next number: ");
  scanf("%ld",&b);
  if (b<0)
   break;
  else
   c=c+b;
 }
 c=c/(d-a);
 printf("The average is %.2lf\n",c);
}
