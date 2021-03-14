/* Header file for structures */
// By M Naga Teja on 06-09-2018

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    int r;
    int i;
} cmplx;

typedef struct
{
    int d;
    int m;
    long int y;
} date;


 typedef struct 
 {
  int h,m,s;
 }time;

typedef struct
{
 char name[20],gen[9];
 int reg,yoj;
 char grade;
 float cgpa;
 date b;
}info; 

cmplx add (cmplx a, cmplx b);

cmplx sub (cmplx a, cmplx b);

cmplx pro (cmplx a, cmplx b);

cmplx quo (cmplx a, cmplx b);

date tom(date a);

int leap(long int a);

time ah(time a,int y);

time am(time a,int y);

time as(time a,int y);

time addt(time a,time b);

time subt(time a,time b);

time ext(time a);

void abvavg(info a[],int i);

void regd(info a[],int i,int x);

void print(info a[],int k);

void yoj(info a[],int i,int x);

void gen(info a[],int i,char g[]);

void cgp(info a[],int N);

void swap(info *p1,info *p2);


