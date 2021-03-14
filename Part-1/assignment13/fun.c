/* Function file for structures */
// By M Naga Teja on 06-09-2018

#include"mine.h"


// Complex addition function

cmplx add (cmplx a, cmplx b)
{
    cmplx c;
    c.r=a.r+b.r;
    c.i=a.i+b.i;
    return c;
}


// Complex subtract function

cmplx sub (cmplx a, cmplx b)
{
    cmplx c;
    c.r=a.r-b.r;
    c.i=a.i-b.i;
    return c;
}


// Complex product function

cmplx pro (cmplx a, cmplx b)
{
    cmplx c;
    c.r=a.r*b.r-a.i*b.i;
    c.i=a.r*b.i+a.i*b.r;
    return c;
}



// Complex quotient function

cmplx quo (cmplx a, cmplx b)
{
    cmplx c;
    c.r=(a.r*b.r+a.i*b.i)/(b.r*b.r-b.i*b.i);
    c.i=(a.i*b.r-a.r*b.i)/(b.r*b.r-b.i*b.i);
    return c;
}



// Tommorow's date function

date tom(date a)
{
    date b;
    b=a;
    b.d++;
    if (a.m==1||a.m==3||a.m==5||a.m==7||a.m==8||a.m==10||a.m==12)
        if (a.d==31)
        {
            b.d=1;
            b.m++;
            if (a.m==12)
                b.y++;
        }
    
    if (a.m==4||a.m==6||a.m==9||a.m==11)
        if (a.d==30)
        {
            b.d=1;
            b.m++;
        }
    
    if (a.m==2)
        if (a.d==28)
            {
                 if (!leap(a.y))
                     b.d=1;
                     b.m++;
            }    
        else if (a.d==29)
        {
            b.d=1;
            b.m++;
        }

   return b;
}



// Leap year function

int leap(long int a)
{
 if ((a%16==0)||((a%4==0)&&(a%100!=0)))
     return 1;
 return 0;
}


// Add hours function

time ah(time a,int y)
{
    a.h+=y;
    a=ext(a);
    return a;
}


// Add minutes function

time am(time a,int y)
{
    a.m+=y;
    a=ext(a);
    return a;
}


// Add seconds function

time as(time a,int y)
{
    a.s+=y;
    a=ext(a);
    return a;
}


// Add time function

time addt(time a,time b)
{
    a.h+=b.h;
    a.m+=b.m;
    a.s+=b.s;
    a=ext(a);
    return a;
}


// Subtract time function

time subt(time a,time b)
{
    a.h-=b.h;
    a.m-=b.m;
    a.s-=b.s;
    a=ext(a);
    return a;
}


// Exact time function

time ext(time a)
{
    a.m+=(a.s/60);
    a.s%=60;
    a.h+=(a.m/60);
    a.m%=60;
    a.h%=24;
    if(a.s<0)
    {
        a.s+=60;
        a.m--;
    }
    if(a.m<0)
    {
        a.m+=60;
        a.h--;
    }
    if(a.h<0)
        a.h+=24;
    return a;
}


// Above average function


void abvavg(info a[],int i)
{
 int j,l=0;
 float k=0.0;
 for(j=0;j<i;j++)
 { 
   k=k+a[j].cgpa;
 }
   k=k/j;
   printf("\nThe average cgpa is : %.2f\n",k);
 for(j=0;j<i;j++)
 { 
  if(a[j].cgpa>=k)  
   {
    print(a,j);
   }
 }
}


// Print regd no function

void regd(info a[],int i,int x)
{ 
 int j;
 for(j=0;j<i;j++)
 {
  if(a[j].reg==x)
   break;
 }
 if(j!=i)
   print(a,j);
 else
  printf("\nnot found\n");
  return;
}

// Print info function

void print(info a[],int k)
{
 printf("\n\t\t\tThe name is %s\n",a[k].name);
 printf("\t\t\tThe gender is %s\n",a[k].gen);
 printf("\t\t\tThe Regd.no is %d\n",a[k].reg);
 printf("\t\t\tThe cgpa is %f\n",a[k].cgpa);
 printf("\t\t\tThe grade is %c\n",a[k].grade);
 printf("\t\t\tThe D.O.B is %d.%d.%d\n",a[k].b.d,a[k].b.m,a[k].b.y);
 printf("\t\t\tThe year of joining is %d\n",a[k].yoj);
 printf("\n");
} 

//print info with particular year of joining

void yoj(info a[],int i,int x)
{
 int k;
 for(k=0;k<i;k++)
 {
   if((a[k].yoj)==x)
    print(a,k);
 }
} 

//print info with particular gender

void gen(info a[],int i,char g[])
{
 int k;
 for(k=0;k<i;k++)
 {
  if(strcmp(a[k].gen,g)==0)
   print(a,k);
 } 
}

//This prints the info in cgpa order

void cgp(info a[],int N)
{
 int i,j,k;
 for(j=1;j<N-1;j++)
 {
  k=0;
   for(i=0;i<N-j;i++)
   {
    if(a[i].cgpa>a[i+1].cgpa)
    {
     swap(&a[i],&a[i+1]);
     k++;
    } 
   }
   if(k==0)
    break;
  }
 for(i=N-1;i>=0;i--)
  print(a,i);
}

//This program swaps 2 no.

void swap(info *p1,info *p2)
{
 info a;
 a=*p1;
 *p1=*p2;
 *p2=a;
}


