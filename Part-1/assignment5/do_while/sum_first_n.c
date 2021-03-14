/* Program to find sum of first n numbers */
// By M Naga Teja On 21-06-2018
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the value of n: ");
 scanf("%d",&n);
 
do 
 {
  i=i+n;
  n=n-1;
 }
 while(n!=0);
 
 printf("The sum of first n numbers is %d\n",i);
}
