/* Program to find maximum of 3 integers */
// By M Naga Teja On 13-6-2018
#include<stdio.h>
void main()
{
 int a,b,c;

 printf("Enter 3 integers\n");
 scanf("%d%d%d",&a,&b,&c);

 if (a>=b)

  {
   if (a>=c)
   printf("Maximum is %d\n",a);

   else
   printf("Maximum is %d\n",c);
  }

 else
  {
   if (b>=c)
   printf("Maximum is %d\n",b);

   else
   printf("Maximum is %d\n",c);
  }
}
