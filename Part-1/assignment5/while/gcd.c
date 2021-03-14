/* Program to find Greatest Common Divisor of two numbers */
// By M Naga Teja On 20-06-2018
#include<stdio.h>
void main()
{

 long int x,y,z;

 printf("Enter the numbers: ");
 scanf("%ld%ld",&y,&z);

 if (y>=z)
 x=z;
 else
 x=y;

 while((y%x!=0)||(z%x!=0))
 {
  x--;
 }

 printf("The GCD of %ld and %ld is %ld\n",y,z,x);
}

