/* Program of functions of arrays */
// By M Naga Teja on 11-07-2018
#include"mine.h"

// Arithmetic mean function

double AM (double array[],long int n)
{
 double x=0.0,y;
 long int i;

 for (i=0; i<n; i++)
  x=x+array[i];
 
 y=x/n;
 return y;
}

// Geometric mean function

double GM (double array[],long int n)
{
 double x=1.0;
 long int i;
 
 for (i=0; i<n; i++)
  x*=array[i];
 
 x= pow(x,1.0/n);
 return x;
}

// Harmonic mean function

double HM (double array[],long int n)
{
 double x=0.0;
 long int i;
 
 for (i=0; i<n; i++)
  x+=(1.0/array[i]);
 
 x= n/x;
 return x;
}

// Range function

double R (double array[],long int n)
{
 double x, y;
 long int i;
  x= array[0];
  y= array[0];
 for (i=0; i<n; i++)
 {
  if (x>array[i])
   x=array[i];
  if (y<array[i])
   y=array[i];
 }
 return y-x;
}

// Function to find maximum difference between 2 consective elements

double D (double array[],long int n)
{
 double x=0, y=0;
 long int i;
 for (i=1; i<n; i++)
 {
  x= array[i] - array[i-1];
  if (x>y)
   y=x;
 }
 return y;
}

// Maximum function

double M (double array[],long int n)
{
 double x=array[0];
 long int i;

 for (i=1; i<n; i++)
 {
  if (x< array[i])
   x= array[i];
 }
 return x;
}

// Bubble sort function

void BS (long int a[], long int n)
{
 long int c,i,j,b;
 for (i=0; i<n; i++)
 {
  c=0;
  for (j=0; j<n-i; j++)
  {
   if (a[j]>a[j+1])
   {
    Sw (&a[j], &a[j+1]);
    c++;
   }
  }
  if (c=0)
   break;
 }
}

// Swap function with pointers

void Sw (long int *a,long int *b)
{
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;
}

// Selection sort function

void SS (long int a[], long int n)
{
 long int x,i,p;
 for (x=0; x<n-1; x++)
 {
  p=x;
  for (i=x+1; i<n; i++)
  {
   if (a[i]<a[p])
    p=i;
  }
  if (p!=x)
   Sw (&a[x],&a[p]);
 }
}

// Simple merge function

void Mg (long int a[], long int s)
{
 long int x=0,y=s/2,h,i;
 while (x<y&&y<s)
 {
  if (a[x]<=a[y])
   x++;
  else
  {
   h=a[y];
   for (i=y; i>x; i--)
    a[i]=a[i-1];
   a[x]=h;
   x++;
   y++;
  }
 }
}

// Merge sort function

void MS (long int a[], long int s)
{
 if (s>1)
 {
  MS (a,s/2);
  MS (&a[s/2],s/2+s%2);
  Mg(a,s);
 }
}

// Inserion sort function

void IS (long int a[],long int n)
{
 long int x,i;
 for (x=1; x<n; x++)
 {
  i=x;
  while(a[i]<a[i-1]&&i!=0)
  {
   Sw (&a[i],&a[i-1]);
   i--;
  }
 }
}

// Linear search function

long int Ls (long int a[],long int n, long int k)
{
 long int i;
 for (i=0; i<n; i++)
 {
  if (a[i]==k)
   return i;
 }
 return -1;
}

// Binary search function 

long int Bs (long int a[], long int l, long int r, long int k)
{
 long int c;
 while (l<=r)
 {
  c= (r+l)/2;
  if (a[c]==k)
   return c;
  else if (a[c]>k)
   r= c-1;
  else
   l= c+1;
 }
 return -1;
}

// Recursive Binary search function

long int RBs (long int a[], long int l, long int r, long int k)
{
 long int c;
 if (l<=r)
 {
  c= (r+l)/2;
  if (a[c]==k)
   return c;
  else if (a[c]>k)
   return RBs (a, l, c-1, k);
  else
   return RBs (a, c+1, r, k);
 }
 return -1;
}




