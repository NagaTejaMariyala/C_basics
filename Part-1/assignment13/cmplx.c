/* Program to perform operations on complex numbers */
// By M Naga Teja on 06-09-2018

#include"mine.h"

void main()
{
    cmplx a,b,c;
    printf("Enter the first number (a+bi): \n");
    scanf("%d+%di",&a.r,&a.i);

    printf("Enter the second number (a+bi): \n");
    scanf("%d+%di",&b.r,&b.i);

    c=add (a,b);
    printf("The sum is %d+%di\n",c.r,c.i);
    
    c=sub (a,b);
    printf("The difference is %d+%di\n",c.r,c.i);
    
    c=pro (a,b);
    printf("The product is %d+%di\n",c.r,c.i);
    
    c=quo (a,b);
    printf("The qoutient is %d+%di\n",c.r,c.i);

}
