/* Progarm to implement linked list */
// By M Naga Teja On 28-11-2018

#include<stdio.h>
#include<stdlib.h>

struct Node
{
 int data;
 struct Node *next;
}; 
typedef struct Node node;

node* insert_at_beginning(node* h,int x)
{
    node *p;
    
    p=(node *)calloc (1,sizeof(node));
    p->data=x;
    p->next=h;
    return p;
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

node *insert_after_position(node *h,int pos,int x)
{
 node *k,*t=(node *)calloc(1,sizeof(node));
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
  t->next=NULL;
  return t;
 } 
 if(pos==0)
 { 
  t->next=h->next;
  return t;
 }
 for(i=1;i<pos&&h!=NULL;i++)
  h=h->next;
 t->next=h->next;
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


int count(node *h)
{    
 int i=0;
 if(h==NULL)
  return 0;
 while(h!=NULL)
 {
  h=h->next;
  i++;
 } 
 return i;
}

int search(node *h,int x)
{
 int i=1;
 if(h==NULL)
 {
  printf("\nList is empty\n");
  return 0;
 }
 while(h!=NULL)
 {
  if(h->data==x)
   return i;
  h=h->next;
  i++;
 }
  return 0;
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

node *delete_list(node *h)
{
 node *k;   
 if(h==NULL)
  return h;
 while(h!=NULL)
 { 
  k=h;
  h=h->next;
  free(k);
 }
 return NULL;
}


int is_empty(node *h)
{
 if(h==NULL)
  return 1;
 return 0;
}


void sort(node *h)
{
 if(h->next==NULL)
    return; 
 node *k=h;
 int d;
 while(k!=NULL)
 {    
  h=k->next;   
  while(h!=NULL)
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
}

node *reverse(node *h)
{
 if(h==NULL||h->next==NULL) 
  return h;
 node *a=h,*b,*k=a;
 int z;

 h=h->next;
 b=h->next;
 while(b!=NULL)
 {
  h->next=a;
  a=h;
  h=b;
  b=b->next;
 }
 k->next=NULL;
 h->next=a;
return h;
} 

int isprime(int i)
{
    int k=2;
    if(i==1)
        return 0;
    while(k<i)
    {
        if(i%k==0)
            break;
        k++;
    }
    if(i==k)
        return 1;
    else
        return 0;
}

node *delete_prime_nodes(node* h)
{
    node *p,*t;
    int i;
    p=h;
    t=h->next;
    i=2;
    while(t!=NULL)
    {
        if(isprime(i))
        {
            p->next=t->next;
            free(t);
            t=p->next;
        }
        else
        {
            p=p->next;
            t=t->next;
        }
        i++;
    }
    return h;
}

void display_repititions(node* h)
{
    node *f,*m;
    f=h;
    while(f!=NULL)
    {
        m=h;
        while(f->data!=m->data)
            m=m->next;
        if(f==m)
        {
            m=m->next;
            while(m!=NULL)
            {
                if(m->data==f->data)
                {
                    printf("%d",f->data);
                    break;
                }
                m=m->next;
            }
        }
        f=f->next;
    }
}


void main()
{
 node *h=NULL;
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
  printf("\n\t12.Delete Prime Nodes");
  printf("\n\t13.Display Repititions");
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

   case 12:
    h=delete_prime_nodes(h);
    break;

   case 13:
    display_repititions(h);
    break;

   default:
    exit(1);
    break;
   
  }
 } 
}


