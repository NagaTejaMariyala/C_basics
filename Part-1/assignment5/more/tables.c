/* Program to print multiplication tables from 5 to 9 in separate columns*/
// By M Naga teja on 26-06-2018
#include<stdio.h>
void main()
{
 int x,y=1;
 do
 {

  x=5;
  do

  {
   printf("%d*%d=%d    \t",x,y,x*y);
   x++;
  }

  while (x<10);
  printf("\n");

 y++;
 }

 while (y<21);
}
