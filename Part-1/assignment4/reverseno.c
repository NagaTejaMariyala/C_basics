/* Program to reverse a 5 digit input number and check whether reverse number and input number are same or not*/
// By M Naga Teja On 19/06/2018
#include<stdio.h>
void main() 
{
 int a,b,c,d,e;
 printf("Enter a 5 digit number: ");
 scanf("%d",&a);
 e=a%10;
 d=a/10%10;
 c=a/100%10;
 b=a/1000%10;
 a=a/10000;
 c=e*10000+d*1000+c*100+b*10+a;
 printf("Reverse number is %d\n",c);
 if ((e==a)&&(b==d))
  printf("The reverse number is same as input\n");
 else
  printf("The reverse number is different\n");
}
