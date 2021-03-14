/* Program to print the prime numbers between two given numbers  */
// By M Naga Teja On 03-07-2018
#include<stdio.h>
void main()
{
 int a,b,c,d,e=0;
 while (1)
 {
  printf("Enter the a,b of the interval [a,b]: ");
  scanf("%d%d",&a,&b);

  if (b>=a)
  {
   if (b<2)
    printf("There are no primes in this interval\n");
   else
    break;
  }
  else
  {
   c=a;
   a=b;
   b=c;
   break;
  }
 } 
if (a<2)
 c=2;
else
 c=a;

for (;c<b;c++)
{
 for(d=2; c%d!=0; d++);
 
 if (c==d)
 {
  printf("%d  ",c);
  e++;
 }
}
printf("\n");

if (e==0)
printf("There are no primes in this interval\n");
}
