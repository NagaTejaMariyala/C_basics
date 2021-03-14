/* Program to find maximum and minimum of two real numbers */
//By M Naga Teja On 13-6-2018
#include<stdio.h>
void main()
{
 float a,b;

 printf("Enter two real numbers\n");
 scanf("%f%f",&a,&b);

 if (a>=b)
  printf("Maximum is %f \nMinimum is %f\n",a,b);
 else
  printf("Maximum is %f \nMinimum is %f\n",b,a);
}
