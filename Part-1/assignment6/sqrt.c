/* Program to find square root using sequence */
// By M Naga Teja On 03-07-2018
#include<stdio.h>
#include<math.h>
void main()
{
 double a,x=1.0,i;
 printf("Enter the value of a: ");
 scanf("%lf",&a);a+=0.0;

 for (i=0;i<9999999;i++)
 x=0.5*(x+a/x);
 
   printf("%lf\n",x);

 printf("%lf\n",sqrt(a));

}
