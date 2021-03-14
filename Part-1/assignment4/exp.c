/* Program to evaluate an expression*/
// By M Naga Teja On 14-6-2018
#include<stdio.h>
#include<math.h>
void main()
{
 double a;
 printf("Enter the value of A: ");
 scanf("%lf",a);
 a=2*M_PI*log(sqrt(1/9.8))*(1/4*pow((sin(a/2)),3)+exp(1.32));
 printf("The value of expression is %lf\n",a);
}
