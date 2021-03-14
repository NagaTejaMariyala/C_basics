/* Program to print truth tables for conditions */
// By M Naga Teja On 03-07-2018
#include<stdio.h>
void main()
{
 int a=0,b=0,c=0,d;

 printf("a  b  c  d       a||b||c||d       a&&b||c||d   !(!a||b)&&(!c||d)\n");

 for (d=0; 1; d++)
 {
  c=c+d/2;
  d=d%2;
  b=b+c/2;
  c=c%2;
  a=a+b/2;
  b=b%2;
 
 printf("%d  %d  %d  %d\t      %d \t\t%d\t\t%d\n",a,b,c,d,\
   a||b||c||d,a&&b||c||d,!(!a||b)&&(!c||d));

 if (a+b+c+d==4)
  break;
 }
}
