/* Program to sum the digits of a 7 digit number*/
// By M Naga Teja On 19-06-2018
#include<stdio.h>
void main()
{
 long int a;
 printf("Enter a 7 digit number: ");
 scanf("%d",&a);
 a=a%10+(a/10%10)+(a/100%10)+(a/1000%10)\
 +(a/10000%10)+(a/100000%10)+(a/1000000);
 printf("The sum of digits is %d\n",a);
}
