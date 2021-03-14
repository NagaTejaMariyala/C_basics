/* Program to swap 2 numbers with 2 variables*/
//By M Naga Teja
#include <stdio.h>
void main(){
int a,b;
printf("Value of a ");
scanf("%d",&a);
printf("value of b ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("the values of a and b are %d and %d respectively\n",a,b);
}
