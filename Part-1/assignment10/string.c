/* Program to use string functions */
// By M Naga Teja on 16-08-2018
#include<stdio.h>
#include<string.h>
void main(){
char s,a[10],b[10];

gets(a);
puts(a);

strcpy(b,a);
puts(b);

s=strcmp(a,b);
printf("%d\n",s);

s=strlen(a);
printf("%d\n",s);

strcat(a,b);
puts(a);

}
