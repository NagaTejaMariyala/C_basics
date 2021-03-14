/* Program to find a^b */
// By M Naga Teja On 20-06-2018
#include<stdio.h>
void main()
{
 int a,b,c=1;

 printf("Enter the values of a and b for a^b: ");
 scanf("%d%d",&a,&b);

 while (b!=0)
 {
  c=c*a;
  b=b-1;
 }

 printf("The value of a^b is %d\n",c);
}
