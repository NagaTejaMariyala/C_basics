/* Program to find product of n integers*/
// By M Naga teja on 26-06-2018
#include<stdio.h>
void main()
{
 long int a,b,c;
 printf("Enter the value of n: ");
 scanf("%ld",&c);

 for (a=1;c>0;c--)
 {
  printf("Enter the integer: ");
  scanf("%ld",&b);

  if (b!=0)
   a*=b;
  else
   continue;
 }

 printf("The product is %ld\n",a);
}
