/* Program to find pro of matrices */
// By M Naga Teja on 04-09-2018


#include"mine.h"

void main()
{
    int **p,**q,m,n,option,m2,n2,t;

    printf("Dynamic matrices Implementation.\n");
    printf("Enter the dimensions of the matrix(m*n)\n");
    printf("m: ");
    scanf("%d",&m);
    printf("n: ");
    scanf("%d",&n);

    p=init(p,m,n);

    printf("Enter the elements of the matrix.\n");
    in(p,m,n);

    printf("What do you want to do?\n");
    printf("1.Trace\n2.Upper Triangle?\n3.Sum\n4.pro\n");
    scanf("%d",&option);

    if(option<3){
        switch(option){
            case 1: t=trace(p,m,n);
                    if(t!=-1)
                       printf("The trace of the matrix is %d\n",t);
                    break;

            case 2: if(cut(p,m,n))
                        printf("The matrix is an upper triangular one.\n");
                    else
                        printf("The matrix is not an upper triangular one.\n");
                    break;
        }
    }
    else if(option<5){
        switch(option){
            case 3: q=init(q,m,n);
                    printf("Enter the elements of the second matrix(the dimensions are the same as the first one.)\n");
                    in(q,m,n);
                    printf("The sum of the two matrices is:\n");
                    Sum(p,q,m,n);
                    break;

            case 4: printf("Enter the dimensions of the second matrix:\n");
                    printf("Row_no: ");
                    scanf("%d",&m2);
                    printf("Col_no: ");
                    scanf("%d",&n2);
                    if(m2!=n) 
                        printf("Sorry! Can't multiply the two matrices.\n");
                    else{
                        q=init(q,m2,n2);
                        printf("Enter the elements of the matrix.\n");
                        in(q,m2,n2);
                        printf("The pro of the two matrices is:\n");
                        pro(p,q,m,n,n2);
                    }
                    break;
        }
    }
    else
        printf("Sorry! Wrong option.");

}
  
