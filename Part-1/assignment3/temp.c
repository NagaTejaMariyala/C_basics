/*Program to convert temperature from celsius to fahrenheit*/
//By M Naga Teja
#include <stdio.h>
void main()
{
 float c,f;
 int a;
 printf("For c to f type 1\nFor f to c type 2");
 scanf("%d",&a);
 if(a==1)
 {
  printf("Enter the temperature in degree celsius ");
  scanf("%f",&c);
  f=(1.8*c)+32;
  printf("Temperature in fahrenheit is %.2f",f);
 }
 else {printf("Enter the temperature in fahrenheit ");
       scanf("%f",&f);
       c=(f-32)/1.8;
       printf("Temperature in celsius is %.2f",c);
      }
}
