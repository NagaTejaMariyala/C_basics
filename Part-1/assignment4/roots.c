/* Program to find roots of a quadriatic equation */
// BY M Naga Teja On 14-6-2018
#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,x,y;
 printf("Enter values of a,b,c in the equation ax2+bx+c=0\n ");
 scanf("%f%f%f",&a,&b,&c);
 x=(b*b-4*a*c);
 if (x>=0)
  {
   y=(-b+sqrt(x))/(2*a);
   x=(-b-sqrt(x))/(2*a);
   printf("The roots of the quadriatic equation ax2+bx+c=0 are %.2f and %.2f\n",y,x);
  }
 else
  {
   x=-x; 
   y=(-b)/(2*a);
   x=(sqrt(x))/(2*a);
   printf("The roots of the quadriatic equation ax2+bx+c=0 are %.2f+%.2fi and %.2f-%.2fi\n",y,x,y,x);
  }
}
