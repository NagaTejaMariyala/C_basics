/* Program to implement binary operations on linked lists */
// By M Naga Teja On 05-12-2018

#include<stdio.h>
#include<stdlib.h>

struct Node
{
 int data;
 struct Node *next;
}; 
typedef struct Node node;

node* Union(node* a,node* b)
{
    node *h,*t;
    h=NULL;
    while(a!=NULL&&b!=NULL)
    {
        if(h==NULL)
        {
            h=(node*)calloc(1,sizeof(node));
            t=h;
        }
        else
        {
            t->next=(node*)calloc(1,sizeof(node));
            t=t->next;
        }
        if(a->data>b->data)
        {
            t->data=b->data;
            b=b->next;
        }
        else if(a->data<b->data)
        {
            t->data=a->data;
            a=a->next;
        }
        else
        {
            t->data=b->data;
            b=b->next;
            a=a->next;
        }
    }

    while(a!=NULL)
    {
        if(h==NULL)
        {
            h=(node*)calloc(1,sizeof(node));
            t=h;
        }
        else
        {
            t->next=(node*)calloc(1,sizeof(node));
            t=t->next;
        }
        t->data=a->data;
        a=a->next;
    }

    while(b!=NULL)
    {
        if(h==NULL)
        {
            h=(node*)calloc(1,sizeof(node));
            t=h;
        }
        else
        {
            t->next=(node*)calloc(1,sizeof(node));
            t=t->next;
        }
        t->data=b->data;
        b=b->next;
    }
    
    return h;
}

node* Intersection(node* a,node* b)
{
    node *h,*t;
    h=NULL;
    while(a!=NULL&&b!=NULL)
    {
        if(a->data > b->data)
            b=b->next;
        else if(a->data < b->data)
            a=a->next;
        else
        {
            if(h==NULL)
            {
                h=(node*)calloc(1,sizeof(node));
                t=h;
            }
            else
            {
                t->next=(node*)calloc(1,sizeof(node));
                t=t->next;
            }
            t->data=b->data;
            b=b->next;
            a=a->next;
        }
    }
    return h;
}


node* Concatenation(node* a,node* b)
{
    node *h,*t;
    h=NULL;

    while(a!=NULL)
    {
        if(h==NULL)
        {
            h=(node*)calloc(1,sizeof(node));
            t=h;
        }
        else
        {
            t->next=(node*)calloc(1,sizeof(node));
            t=t->next;
        }
        t->data=a->data;
        a=a->next;
    }

    while(b!=NULL)
    {
        if(h==NULL)
        {
            h=(node*)calloc(1,sizeof(node));
            t=h;
        }
        else
        {
            t->next=(node*)calloc(1,sizeof(node));
            t=t->next;
        }
        t->data=b->data;
        b=b->next;
    }
    
    return h;
}

node *insert_at_end(node *h,int x)
{    
 node *k,*t=(node *)calloc(1,sizeof(node));
 t->next=NULL;
 t->data=x;
 k=h;
 if(k==NULL)
     return t;
 while(h->next!=NULL)
  h=h->next;
 h->next=t;
 return k;
}

void display(node *h)
{
 node *t;
 if(h==NULL)
 {
  printf("\nList is empty.\n");
  return;
 }
 t=h;
 printf("\nThe elements in the list are : ");
 while(t!=NULL)
 {
  printf("%d  ",t->data);
  t=t->next;
 }
}

node *delete(node *h,int x)
{   
 node *t,*l;
 if(h==NULL)
 {
  printf("\nThe list is empty\n");
   return h;
 }  
 if(h->data==x)
 {
  t=h->next;
  free(h);
  return t;
 }
 l=h;
 t=h->next;
 while(t!=NULL&&t->data!=x)
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



void main()
{
    node *a=NULL,*b=NULL,*c=NULL;
    int op,x,pos;

    while(1)
    {
        printf("\n\tSelect the operation\n\t1.Insert in first\n\t2.Insert in second\n\t3.Delete from first\n\t4.Delete from second\n\t");
        printf("5.Display\n\t6.Union\n\t7.Intersection\n\t8.Concatenation\n\tElse Exit\n");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                printf("\n\tEnter the integer");
                scanf("%d",&x);
                a=insert_at_end(a,x);
                break;
            case 2:
                printf("\n\tEnter the integer");
                scanf("%d",&x);
                b=insert_at_end(b,x);
                break;
            case 3:
                printf("\n\tEnter the integer");
                scanf("%d",&x);
                delete(a,x);
                break;
            case 4:
                printf("\n\tEnter the integer");
                scanf("%d",&x);
                delete(b,x);
                break;
            case 5:
                printf("\n\tLinked list a :\n\t");
                display(a);
                printf("\n\tLinked list b :\n\t");
                display(b);
                printf("\n\tLinked list a*b :\n\t");
                display(c);
                break;
            case 6:
                c=Union(a,b);
                break;
            case 7:
                c=Intersection(a,b);
                break;
            case 8:
                c=Concatenation(a,b);
                break;
            default :
                exit(1);
        }
    }


}
