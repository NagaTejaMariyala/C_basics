/* Program to find sum, difference, product, quotient and remainder*/
// By M Naga Teja
#include<stdio.h>
void main()
{
 float s,p,d,q,r,a,b;
 printf("Enter two real numbers: ");
 scanf("%f%f",&a,&b);
 s=a+b;
 d=a-b;
 p=a*b;
 q=a/b;
 r=a-(b*q);
 printf("Sum(a+b)=%f\nDifference(a-b)=%f\nProduct(a*b)=%f\nQuotient(a/b)=%f\nRemainder(a%b)=%f\n",s,d,p,q,r);
}
