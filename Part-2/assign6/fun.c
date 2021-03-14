/* Function file for implementing polynomial operations using linked lists */
// By M Naga teja On 12-12-2018

#include"mine.h"

polyptr createpoly()
{
    polyptr t;
    t=(polyptr)calloc(1,sizeof(struct polynode));
    if(t==NULL)
    {
        printf("\tCouldn't allocate memory\n\texiting\n");
        return;
   }
    return t;
}

void display(polyptr h)
{
 if(h==NULL)
 {
     printf("\nThere are no elements in the polynomial\n");
     return;
 }   
 printf("p(x)=(%.2f)x^%d",h->coef,h->exp);
 h=h->next;
 while(h!=NULL)
 {
  printf("+(%.2f)x^%d",h->coef,h->exp);
  h=h->next;
 } 
 return;
}

polyptr add_poly(polyptr p1,polyptr p2)
{
 polyptr p3=NULL;
 while(p1!=NULL && p2!=NULL)
 {
  if(p1->exp==p2->exp)
  {
   p3=ins(p3,p1->coef+p2->coef,p1->exp);
   p1=p1->next;
   p2=p2->next;
   continue;
  }  
  else if(p1->exp > p2->exp)
  {
   p3=ins(p3,p1->coef,p1->exp);
   p1=p1->next;
   continue;
  }
  else if(p2->exp > p1->exp)
  {
   p3=ins(p3,p2->coef,p2->exp);
   p2=p2->next;
   continue;
  } 
 }
 if(p1==NULL)
 {  
  while(p2!=NULL)
  {
   ins(p3,p2->coef,p2->exp);
   p2=p2->next;
  }
 }
 else if(p2==NULL)
 {
  while(p1!=NULL)
  {
   ins(p3,p1->coef,p1->exp);
   p1=p1->next;
  } 
 }
 return p3;
}

polyptr ins(polyptr p,float coef,int exp)
{
 polyptr k=calloc(1,sizeof(polyptr)),m=p,n=p;
 k->coef=coef;
 k->exp=exp;
 if(p==NULL)
  return k;
 if(p->exp<exp)
 { 
  k->next=p;
  return k;
 } 
 while(p!=NULL)
 {
  if(p->exp==exp)
  {
   p->coef=p->coef+coef;
   free(k);
   return m;
  }
  else if(p->exp<exp)
  {
   n->next=k;
   k->next=p;
   return m;
  } 
  n=p;
  p=p->next;
 } 
 n->next=k;
 return m;
}

polyptr mul_poly(polyptr p1,polyptr p2)
{
 polyptr h=p2,p3=NULL;
 while (p1!=NULL)
 { 
  p2=h;   
  while(p2!=NULL)
  {
   p3=ins(p3,p2->coef*p1->coef,p1->exp+p2->exp);
   p2=p2->next;
  } 
  p1=p1->next;
 }
 return p3;
}
