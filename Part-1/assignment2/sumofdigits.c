/* Program to sum the digits of a 3 digit number*/
//By M Naga Teja
#include <stdio.h>
void main(){
int a,b,c,n;
printf("Enter a 3 digit number: ");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=a+b+c;
printf("The sum of digits of given number is %d\n",n);
}
