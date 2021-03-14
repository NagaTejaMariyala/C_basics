/* Program to find gcd of 2 numbers */
// By M Naga Teja on 10-07-2018
#include"mine.h"
void main()
{
 long int a,b,c;

 printf("Enter the numbers: ");
 scanf("%ld%ld",&a,&b);

 c= gcd (a,b);
 printf("The GCD of %ld and %ld is %ld\n",a,b,c);
}
