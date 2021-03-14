/* Program to check whether a character is upper case, lower case or a digit */
// By M Naga Teja On 14-6-2018
#include<stdio.h>
void main()
{
 char c;
 printf("Enter the character : ");
 scanf("%c",&c);
 if ((c>64)&&(c<91))
   printf("The character is upper case\n");
 else if ((c>96)&&(c<123))
   printf("The character is lower case\n");
 else if ((c>47)&&(c<58))
   printf("The character is a digit\n");
 else
   printf("The character is special character\n");
}
