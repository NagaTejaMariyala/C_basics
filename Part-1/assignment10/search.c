/* Program to copy a string to other */
// By M Naga Teja on 21-08-2018

#include"mystr.h"

void main()
{
 char s[N],a;
 long int k;

 printf("Enter the string");
 gets(s);

 printf("Enter the character");
 scanf("%c",&a);

 k=search(s,a);
 if (k==-1)
     printf("Not found in the string\n");
 else
     printf("The position of character is %ld\n",k+1);

}
