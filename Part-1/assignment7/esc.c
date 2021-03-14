/* Program to calcuate exp(x) sin(x) cos(x) using series formula */
// By M Naga Teja on 05-07-2018
#include"mine.h"
void main()
{
 int a;
 double b,c;
 
 printf("Enter the number: ");
 scanf("%lf",&b);

 printf("Select the operator  1.exponent 2.sine 3.cosine ");
 scanf("%d",&a);

 switch (a)
 {
  case 1:
   c= exp(b);
   break;
  case 2:
   c= sine(b);
   break;
  case 3:
   c= cosine(b);
   break;
  default:
   printf("Invalid operator");
   b=0;
   break;
 }
if (b!=0)
 printf("%lf\n",c);
}
