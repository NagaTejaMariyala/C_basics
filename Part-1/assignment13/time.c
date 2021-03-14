/* Program to operate on time */
// By M Naga Teja on 11-09-2018

#include"mine.h"

void main()
{
    time a,b;
    int x,y;

    while(1)
    {
        printf("Enter the time : (hh:mm:ss)\n");
        scanf("%d:%d:%d",&a.h,&a.m,&a.s);

        printf("Enter the operation: \n1.Add hours \n2.Add minutes \n3.Add seconds\n4.Add time \n5.subtract time\n");
        scanf("%d",&x);

        switch (x)
        {
            case 1:
                printf("Enter the no. of hours: \n");
                scanf("%d",&y);
                a=ah(a,y);
                break;
            case 2:
                printf("Enter the no. of minutes: \n");
                scanf("%d",&y);
                a=am(a,y);
                break;
            case 3:
                printf("Enter the no. of seconds: \n");
                scanf("%d",&y);
                a=as(a,y);
                break;
            case 4:
                printf("Enter the time : (hh:mm:ss)\n");
                scanf("%d:%d:%d",&b.h,&b.m,&b.s);
                a=addt(a,b);
                break;
            case 5:
                printf("Enter the time : (hh:mm:ss)\n");
                scanf("%d:%d:%d",&b.h,&b.m,&b.s);
                a=subt(a,b);
                break;
            default :
                exit(1);
                break;

        }
    printf("Now the time is : %d:%d:%d\n",a.h,a.m,a.s);

    }
}
