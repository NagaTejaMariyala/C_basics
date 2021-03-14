/* Program to find out square root and cube of a number*/
// By M Naga Teja On 14-6-18
#include<stdio.h>
#include<math.h>
void main()
{
 float a,b;
 printf("Enter a number: ");
 scanf("%F",&a);
 if(a>=0)   
 {
  b=sqrt(a);
  a=pow(a,(1.0/3));
  printf("The square root of the number is %.2f\nThe cube root of the number is %.2f\n",b,a);
 }
 else
 {
  a=0-a;
  b=sqrt(a);
  a=pow(a,(1.0/3));
  a=0-a;
  printf("The square root of the number is %.2fi\nThe cube root of the number is %.2f\n",b,a);
 }
}
