/* Program to find maximum of 3 numbers */
// By M Naga Teja On 03-07-2018
#include<stdio.h>
void main()
{
 int a,b,c,d;
 printf("Enter three integers ");
 scanf("%d%d%d",&a,&b,&c);

 (a>=b)? ((a>=c)? (d=a): (d=c)): ((b>=c)? (d=b): (d=c));

 printf("The maximum is %d\n",d);
}
