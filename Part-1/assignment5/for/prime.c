/* Program to check whether given number is prime */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 int p,d=2;

 printf("Enter the number: ");
 scanf("%d",&p);

 if (p<=1)
 printf("it is niether prime nor composite\n");
 
 else
 {
  for (;p%d!=0;d++)
  {
  } 

  if (p==d)
   printf("It is a prime number\n");
  else
   printf("It is not a prime number\n");
 }

}
