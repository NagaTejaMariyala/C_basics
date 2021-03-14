/* Function file for stacks and qs */
// By M Naga Teja on 25-08-2018

#include"mine.h"


void in(int *top)
{
    *top=-1;
}

void push(int *q, int *top, int x)
{
    if(*top==N-1)
        printf("Stack Overflow!");

    else
    {
        *top+=1;
        *(q+*top)=x;
    }
}

int pop(int *q, int *top)
{
    if(*top==-1)
    {    
        printf("Underflow!");
        return NULL;
    }
    
    int x=q[*top];
    *top-=1;

    return x;
}

void qin(int *f, int *r)
{
    *f=-1;
    *r=-1;
}

void enq(int *q, int *f, int *r, int x)
{
    if(*r==N-1)
        printf("Overflow!");

    else
    {
        *r+=1;
        *(q+*r)=x;
        if(*f<0)
            *f=0;
    }
    return;
}

int deq(int *q, int *f, int *r)
{
    if(*f==-1)
    {
        printf("Underflow!");
        return NULL;
    }

    int x=*(q+*f);

    if(*f==*r)
    {
        *f=-1;
        *r=-1;
    }

    else
        *f+=1;

    return x;
}

void cqin(int *f, int *r)
{
    *f=-1;
    *r=-1;
}

void cenq(int *q, int *f, int *r, int x)
{
    if(*f==*r+1%N)
        printf("Overflow!");

    *r+=1;
    *r%=N;

    *(q+*r)=x;
    if(*f==-1)
        *f=0;
}

int cdeq(int *q, int *f, int *r)
{
    if(*f==-1)
        return NULL;

    int x=*(q+*f);
    if(*f==*r)
    {
        *f=-1;
        *r=-1;
    }
    else
    {
        *f+=1;
        *f%=N;
    }
    return x;
}

int isemptycq(int *q, int *f, int *r)
{
    if(*f==-1)
        return 1;
    return 0;
}

void prtcq(int *q, int f, int r)
{
    if(!isemptycq(q,&f,&r))
    {
        while(1)
        {
            printf("%d, ", *(q+f));
            if(f%N==r)
                break;
            f+=1;
            f%=N;
        }
        printf("\n");
    }
    else
        printf("Empty\n");
}

int iscqfull(int *q, int *f, int *r)
{
    if((*f+1)%N==*r)
        return 1;
    return 0;
}
