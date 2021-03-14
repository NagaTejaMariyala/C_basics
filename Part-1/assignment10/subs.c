/* Program to create a substring from a string */
// By M Naga Teja on 22-08-2018

#include"mystr.h"

void main()
{
 char s[N],a[N];
 long int p,l;

 printf("Enter the string\n");
 gets(s);

 printf("Enter the starting position of substring");
 scanf("%ld",&p);

 printf("Enter the length of substring");
 scanf("%ld",&l);

 subs(a,s,p-1,l);
 puts(a);

}
