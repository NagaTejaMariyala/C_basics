/* Program of calculator using switch case */
// By M Naga Teja On 03-07-2018
#include<stdio.h>
void main ()
{
 double b,c;
 int a;
 
 printf("Select the operation: ");
 printf(" 1.+ 2.- 3.* 4./ ");
 scanf("%d",&a);
 
 printf("Enter two operands: ");
 scanf("%lf%lf",&b,&c);

 switch (a)
 {
  case 1:
   printf("%.2lf+%.2lf=%.2lf\n",b,c,b+c);
   break;

  case 2:
   printf("%.2lf-%.2lf=%.2lf\n",b,c,b-c);
   break;

  case 3:
   printf("%.2lf*%.2lf=%.2lf\n",b,c,b*c);
   break;

  case 4:
   printf("%.2lf/%.2lf=%.2lf\n",b,c,b/c);
   break;

  default:
   printf("Wrong input\n");
   break;
 }
}
