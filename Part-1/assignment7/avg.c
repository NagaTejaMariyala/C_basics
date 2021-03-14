/* Program to print average of marks obtained by all students of the class */
// By M Naga Teja on 10-07-2018
#include"mine.h"
void main()
{
 int x,y,n,i,r,j;
 double a,b;
 printf("Enter the number of students: ");
 scanf("%d",&n);

 for (i=1; i<=n; i++)
 {
  printf("Enter the regd no. : ");
  scanf("%d",&r);
  printf("Enter the number of subjects: ");
  scanf("%d",&x);
  
  b= avg(x);
  printf("Regd no.:%d,average : %.2lf\n",r,b);
 }
}
