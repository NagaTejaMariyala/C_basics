/* Program to check whether a integer is even or odd */
// By M Naga Teja On 13-6-2018
#include<stdio.h>
void main()
{
 int a,b;

 printf("Enter a number: ");
 scanf("%d",&a);
 b=a%2;

 if (b==0)
 printf("The number is even");

 else
 printf("The number is odd");

}
