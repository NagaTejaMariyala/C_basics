/* Program to print first n prime numbers using do_while loop */
// By M Naga teja on 26-06-2018
#include<stdio.h>
void main()
{
 long int m=0,n,p=2,d;

 do
 {
  printf("Enter the value of n: ");
  scanf("%ld",&n);

  if (n<=0)
   continue;
  break;
}
 while (1);

 do
 { d=1;

  do
   d++;
  while (p%d!=0);

  if (p==d)
   {
    printf("%ld  ",p);
    m++;
   }

  p++;
 }
 while (m!=n);

printf("\n");
}
