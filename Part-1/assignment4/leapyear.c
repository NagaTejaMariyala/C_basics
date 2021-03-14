/* Program to check whether a year is leap or not*/
//By M Naga Teja On 19-6-2018
#include<stdio.h>
void main()
{
 int a;
 printf("Enter the year: ");
 scanf("%d",&a);
 if ((a%16==0)||((a%4==0)&&(a%100!=0)))
  printf("It is a leap year\n");
 else
  printf("It is not a leap year\n");
}
