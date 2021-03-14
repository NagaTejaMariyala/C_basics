/* Main program for implementing polynomial operations using linked lists */
// By M Naga teja On 15-12-2018



#include"mine.h"

void main()
{
    polyptr p1=NULL,p2=NULL,p3=NULL;
    int i,exp,x,a;
    float coef;
    while(1)
    {
        printf("\n\n\n1.Insert in the first polynomial");
        printf("\n2.Insert in the second polynomial");
        printf("\n3.Display");
        printf("\n4.SUM");
        printf("\n5.PRODUCT");
        printf("\nTo exit enter '0'\n");
        printf("\nEnter your option : ");
        scanf("%d",&a);
        switch(a)
        {  
            case 1:
                printf("\nEnter the coefficient\n");
                scanf("%f",&coef);
                printf("\nEnter the exponent");
                scanf("%d",&exp);
                p1=ins(p1,coef,exp);
                break;

            case 2:
                printf("\nEnter the coefficient\n");
                scanf("%f",&coef);
                printf("\nEnter the exponent");
                scanf("%d",&exp);
                p2=ins(p2,coef,exp);
                break;

            case 3:
                printf("\n1.p1   2.p2   3.p3  : ");
                scanf("%d",&x);
                if(x==1)
                    display(p1); 
                if(x==2)
                    display(p2); 
                if(x==3)
                    display(p3); 
                break;

            case 4:
                p3=add_poly(p1,p2); 
                break;

            case 5:
                p3=mul_poly(p1,p2);
                break;

            case 0:
                exit(0);

            default:
                printf("\nWrong option.Try again");

        }
    }
}


