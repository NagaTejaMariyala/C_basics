

//Program to replace a substring with other
//by M Nag Teja on 30-08-2018

# include "mystr.h"

void main()
{    
 char a[20],b[8],c[8];
 printf("\nEnter a sentence\n");
 gets(a);
 printf("\nEnter a word\n");
 gets(b);
 printf("\nEnter a word\n");
 gets(c);
 replace(a,b,c);
 puts(a);
} 

