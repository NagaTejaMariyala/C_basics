/* Program to find largest string of the two */
// By M Naga Teja on 22-08-2018

#include"mystr.h"

void main()
{
 char s[N],a[N];
 int k;

 printf("Enter the string");
 gets(s);

 printf("Enter the string");
 gets(a);

 k=larg(s,a);
 if (k==1)
  puts(s);
 else if (k==2)
  puts(a);
 else
  printf("Both are equal\n");
}
