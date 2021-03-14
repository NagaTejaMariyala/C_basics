/* Program to give tommorow's date by taking today's */
// By M Naga Teja on 06-09-2018

#include"mine.h"

void main()
{
    date a,b;

    printf("Enter today's date:(dd-mm-yyyy)\n");
    scanf("%d-%d-%ld",&a.d,&a.m,&a.y);

    b=tom(a);
    
    printf("Tommorow's date is : %d-%d-%ld\n",b.d,b.m,b.y);
}
