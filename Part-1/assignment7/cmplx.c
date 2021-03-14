/* Program to add subtract multiply and divide complex numbers */
// By M Naga Teja on 05-07-2018 
#include"mine.h"
void main()
{
 int z;
 double x,y,a,b;
 printf("Enter first complex number in terms of a&b: ");
 scanf("%lf%lf",&a,&b);
 printf("Enter second complex number in terms of a&b: ");
 scanf("%lf%lf",&x,&y);
 printf("Select the operator 1.+ 2.- 3.* 4./ ");
 scanf("%d",&z);

 switch (z)
 {
  case 1:
   add (a,b,x,y);
   break;
  case 2:
   sub (a,b,x,y);
   break;
  case 3:
   pro (a,b,x,y);
   break;
  case 4:
   div (a,b,x,y);
   break;
  default :
   printf("invalid operator\n");
   break;
 }
}
