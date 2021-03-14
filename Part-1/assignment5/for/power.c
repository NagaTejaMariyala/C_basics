/* Program to find a^b */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 int a,b,c=1;

 printf("Enter the values of a and b for a^b: ");
 scanf("%d%d",&a,&b);

 for (;b!=0;b--)
 {
  c=c*a;
 }

 printf("The value of a^b is %d\n",c);
}
