/* Progarm to implement linked list */
// By M Naga Teja On 28-11-2018

#include<stdio.h>
#include<stdlib.h>

struct Cnode
{
 int data;
 struct Cnode *next;
}; 
typedef struct Cnode cnode;

cnode* insert_at_beginning(cnode* h,int x)
{
    cnode *p,*k=h;
    p=(cnode *)calloc (1,sizeof(cnode));
    if(p==NULL)
    {
        printf("\nCouldn't allocate memory\n");
        return h;
    }
    p->data=x;
    p->next=h;
    if(k==NULL)
    {
        p->next=p;
        return p;
    }
    k=h;
    while(h->next!=k)
        h=h->next;
    h->next=p;
    return p;
}

cnode *insert_at_end(cnode *h,int x)
{    
     cnode *k,*t=(cnode *)calloc(1,sizeof(cnode));
        if(t==NULL)
        {
            printf("\nCouldn't allocate memory\n");
            return h;
        }
     t->next=h;
     t->data=x;
     k=h;
     if(k==NULL)
         return t;
     while(h->next!=k)
      h=h->next;
     h->next=t;
     return k;
} 

cnode *insert_after_position(cnode *h,int pos,int x)
{
     cnode *k,*t=(cnode *)calloc(1,sizeof(cnode));
    if(t==NULL)
    {
        printf("\nCouldn't allocate memory\n");
        return h;
    }
    int i,j=count(h);
    if(pos>j)
    {
        printf("\n\nposition doesn't exist in the list\n");  
        return h;
    }  
    k=h;
    t->data=x;
    if(k==NULL)
    { 
        t->next=t;
        return t;
    } 
    if(pos==0)
    { 
        t->next=h->next;
        while (h->next!=k)
            h=h->next;
        h->next=t;
        return t;
    }
    if (pos==1)
    {
        t->next=h->next;
        h->next=t;
        return k;
    }
    else
        h=h->next;
    for(i=2;i<pos&&h!=k;i++)
        h=h->next;
    t->next=h->next;
    h->next=t;
    return k;
} 




void display(cnode *h)
{
     cnode *t;
     if(h==NULL)
     {
        printf("\nList is empty.\n");
        return;
     }
     printf("\nThe elements in the list are : %d ",h->data);
     t=h->next;
     while(t!=h)
     {
        printf("%d  ",t->data);
        t=t->next;
     }
}


int count(cnode *h)
{    
    int i=1;
    cnode *t=h;
    if(h==NULL)
        return 0;
    h=h->next;
    while(h!=t)
    {
        i++;
        h=h->next;
    } 
    return i;
}

int search(cnode *h,int x)
{
    int i=1;
    cnode *t=h;
    if(h==NULL)
    {
        printf("\nList is empty\n");
        return 0;
    }
    if(h->data==x)
        return i;
    h=h->next;
    while(h!=t)
    {
        i++;
        if(h->data==x)
            return i;
        h=h->next;
    }
    return 0;
}  

cnode *delete(cnode *h,int x)
{   
    cnode *t,*l;
    if(h==NULL)
    {
        printf("\nThe list is empty\n");
        return h;
    }  
    if(h->data==x)
    {
        t=h->next;
        l=t;
        while(l->next!=h)
            l=l->next;
        l->next=t;
        free(h);
        return t;
    }
    l=h;
    t=h->next;
    while(t!=h&&t->data!=x)
    {  
         t=t->next;
         l=l->next;
    }
    if((t->data)==x)
    { 
        l->next=t->next;
        free(t);
    }
    return h;
}

cnode *delete_list(cnode *h)
{
    cnode *k,*t=h;   
    if(h==NULL)
        return h;
    do
    { 
        k=h;
        h=h->next;
        free(k);
    }
    while(h!=t);
    return NULL;
}


int is_empty(cnode *h)
{
    if(h==NULL)
        return 1;
    return 0;
}


void sort(cnode *h)
{
    if(h==NULL||h->next==h)
        return; 
    cnode *k=h,*t=h;
    int d;
    do
    {    
        h=k->next;   
        while(h!=t)
        {
            if(h->data<=k->data)
            {
                 d=h->data;
                 h->data=k->data;
                 k->data=d;
            }
            h=h->next;
        } 
        k=k->next;
    } 
    while(k!=t);
}

cnode *reverse(cnode *h)
{
    if(h==NULL||h->next==h) 
        return h;
    cnode *a=h,*b,*k=a;
    int z;

    h=h->next;
    b=h->next;
    while(b!=k)
    {
        h->next=a;
        a=h;
        h=b;
        b=b->next;
    }
    k->next=h;
    h->next=a;
    return h;
} 



void main()
{
    cnode *h=NULL;
    int a,x,pos,z;
    while(1)
    {
        printf("\n\tSelect the operation: ");
        printf("\n\t1.Insert at the beginning");
        printf("\n\t2.Insert at the end");
        printf("\n\t3.Insert after position");
        printf("\n\t4.Display");
        printf("\n\t5.Count");
        printf("\n\t6.search");
        printf("\n\t7.Delete");
        printf("\n\t8.Delete list");
        printf("\n\t9.Is empty");
        printf("\n\t10.Sort");
        printf("\n\t11.Reverse");
        printf("\n\tElse Exit\n");
        scanf("%d",&a);
        switch(a)
        {  
            case 1:
                printf("\nEnter the Integer\n");
                scanf("%d",&x);
                h=insert_at_beginning(h,x);
                break;

            case 2:
                printf("\nEnter the integer\n");
                scanf("%d",&x);
                h=insert_at_end(h,x);
                break;

            case 3:
                printf("\nEnter the position : ");
                scanf("%d",&pos);
                printf("\nEnter the intger\n");
                scanf("%d",&x);
                h=insert_after_position(h,pos,x);
                break;

            case 4:
                display(h); 
                break;

            case 5:
                printf("The number of elements in list are : %d\n",count(h));
                break;

            case 6:
                printf("\nEnter the number u want to search : ");
                scanf("%d",&x);
                z=search(h,x);
                if(z!=0)
                    printf("The entered number is in %dth position\n",z);
                else
                    printf("The entered number is number in the list\n");
                break;

            case 7:
                printf("\nEnte the number you want to delete\n");
                scanf("%d",&x);
                h=delete(h,x);
                break;

            case 8: 
                h=delete_list(h);
                break;

            case 9:
                z=is_empty(h);
                if(z==1)
                    printf("\n\tYes\n\tThe list is empty\n");
                else
                    printf("\n\tNo.\n\tThe list is not empty\n");
                break;

            case 10:
                sort(h);
                break;

            case 11:
                h=reverse(h);
                break;

            default:
                exit(1);
                break;

        }
    } 
}


