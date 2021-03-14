/* Program to implement Doubly Linked List */
// By M Naga teja On 08-12-2018

#include<stdio.h>
#include<stdlib.h>

struct dlnode
{
   int data;
   struct dlnode *right;
   struct dlnode *left;
};

typedef struct dlnode node;

node *createnode()
{
    node *tmp=calloc(1,sizeof(node));

    return tmp;
}
node *insert_after(node *head,int x,int pos)
{
  if(head == NULL)
  {
     head=createnode();
     head->data=x;
     return head;
  }
 
  node *tmp;
   
  if(pos==0)
  {
    tmp=createnode();
    tmp->data=x;
    tmp->right=head;
    head->left=tmp;
    head=tmp;
  }

  else
  {
    int i=0;
    node *h=head;

    for(;i<pos-1 && h->right!=NULL;i++)
        h=h->right;

    if(i==pos-1)
    {
      tmp=createnode();
      tmp->data=x;
      tmp->right=h->right;
      tmp->left=h;
      if(h->right!=NULL)
       h->right->left=tmp;
      h->right=tmp;
    }
    else
        printf("\nError!!");
  }

 return head; 

}

void display(node *h)
{
node *head=h;
 printf("\nDATA:");   
  while(head!=NULL)
  {
    printf(" %d",head->data);
    head=head->right;
  }
}
node *delete_list(node *head)
{
  node *tmp=head,*ptr;
    
   while(tmp!=NULL)
   {
     ptr=tmp;
     tmp=tmp->right;
     free(ptr);
   }
  return NULL; 
}

void *delete(node *head,int x)
{
    if(head==NULL)
        return NULL;
    else
    {
        node *tmp;

        if(head->data==x)
        {
          tmp=head;
          head=head->right;
          head->left==NULL;
          free(tmp);
          return head;
        }
        else
        {
            node *t=head;

            while(t!=NULL)
            {
                if(t->data==x)
                {
                   tmp=t;
                   tmp->left->right=t->right;
                   if(t->right!=NULL)
                       tmp->right->left=t->left;
                   free(tmp);
                }
              t=t->right;  
            }
        }
    }
  return head;  
}

void main()
{
 node *head=NULL;
int choice,pos,data;
while(1)
{printf("\n\tSelect the operation\n\t1.Insert after position \n\t2.Delete \n\t3.Display \n\tElse Exit\n\n");
 scanf("%d",&choice);
 switch(choice)
 {
     case 1:
             printf("\nEnter position:");
             scanf("%d",&pos);
             printf("\nEnter number:");
             scanf("%d",&data);
              head=insert_after(head,data,pos);
             break;
     case 2:

             printf("\nEnter number:");
             scanf("%d",&data);
              head=delete(head,data);
             break;
     case 3:
             display(head);
             break;
     default:
             exit(-1);
             
 }
} 
 head=insert_after(head,1,0);
 head=insert_after(head,1,6);
int i=0;
 for(;i<5;i++)
 {
  head=insert_after(head,i+1,i);
 }
 display(head);
 head=delete(head,1);
 display(head);
 head=delete_list(head);
}

