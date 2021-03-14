/* Program to find a^b */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 int a,b,c=1;

 printf("Enter the values of a and b for a^b: ");
 scanf("%d%d",&a,&b);

 do
 {
  c=c*a;
  b=b-1;
 }
 while (b!=0);

 printf("The value of a^b is %d\n",c);
}
