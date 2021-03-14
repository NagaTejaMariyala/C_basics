/*Program of mini calculator */
// By M Naga Teja On 19-06-2018
#include<stdio.h>
#include<math.h>
void main()
{
 double a,b,c,d,e;
 printf("Choose a category of operations\n1.Trignometric 2.Arithmetic 3.Relative\n");
 scanf("%lf",&a);

 if(a==1)
 {
  printf("Enter the number: ");
  scanf("%lf",&a);

  b=sin(a);
  c=cos(a);
  d=tan(a);

  printf("sin%.2lf=%.2lf\ncos%.2lf=%.2lf\ntan%.2lf=%.2lf\n",a,b,a,c,a,d);
 }

 else if (a==2)
 {
  printf("Enter the numbers a and b: ");
  scanf("%lf%lf",&a,&b);

  c=a+b;
  d=a-b;
  e=a*b;

  printf("a+b=%.2lf\na-b=%.2lf\na*b=%.2lf\n",c,d,e);
  c=a/b;
  d=pow(a,b);
  printf("a/b=%.2lf\na^b=%.2lf\n",c,d);
 }

 else if (a==3)
 {
  printf("Enter the values of a and b: ");
  scanf("%lf%lf",&a,&b);
  e=(b+c)/2;

  if (a>=b)
   printf("Maximum is %.2lf\n Minimum is %.2lf\nAverage is %.2lf\n",a,b,e);
  else 
   printf("Maximum is %.2lf\n Minimum is %lf\nAverage is %.2lf\n",b,a,e);
 }

 else
  printf("error");

}
