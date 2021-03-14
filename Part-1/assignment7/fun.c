/* Program of my functions */
// By M Naga Teja On 04-07-2018

#include"mine.h"

// Factorial function

long int fact (long int x )
{
 long int y;
 
 for (y=1; x>0; x--)
  y*=x;

 return y;
}

// Combination function

long int C (long int n, long int k)
{
 long int y;
  y= fact(n)/(fact(k)*fact(n-k));
 return y;
}

// Decimal to Binary function

long int f10t2 (long int x)
{
 long int y=0, k;
 for (k=0; x!=0; k++)
 {
  y=y+(x%2*(pow (10,k)));
  x=x/2;
 }
 return y;
}

// Exponential function

double exp(double n)
{
 double y,x=1;
 int k=1;
 while (1)
 {
  y= x+ (pow (n,k)/fact(k));
  if ((y-x<0.001)&&(x-y<0.001))
   break;
  x=y;
  k++;
 }
 return y;
}

// Sine function

double sine (double n)
{
 double y,x=0;
 int l,k=1;
 while(1)
 {
  l=2*k-1;
  y=x+(pow(n,l)/fact(l)*pow(-1,k+1));
  if ((y-x<0.001)&&(x-y<0.001))
   break;
  x=y;
  k++;
 }
 return y;
}

// Cosine function

double cosine (double n)
{
 double y,x=1;
 int l,k=1;
 while(1)
 {
  l=2*k;
  y=x+ (pow(n,l)/fact(l)*pow(-1,k));
  if ((y-x<0.001)&&(x-y<0.001))
   break;
  x=y;
  k++;
 }
 return y;
}

// Complex addition function

void add (float a,float b, float x ,float y)
{
 float p,q;
 p= a+x;
 q= b+y;
 printf("%f+i%f\n",p,q);
}

// Complex subtraction function

void sub (float a,float b, float x ,float y)
{
 float p,q;
 p= a-x;
 q= b-y;
 printf("%f+i%f\n",p,q);
}

// Complex multiplication function

void pro (float a,float b, float x ,float y)
{
 float p,q;
 p= a*x-b*y;
 q= a*y+b*x;
 printf("%f+i%f\n",p,q);
}

// Complex division function

void div (float a,float b, float x ,float y)
{
 float p,q;
 p= (a*x+b*y)/(x*x+y*y);
 q= (b*x-a*y)/(x*x+y*y);
 printf("%f+i%f\n",p,q);
}

// Average function 

double avg (int a)
{
 double y=0,x=0;
 int i;
 for (i=1; i<=a; i++)
 {
  printf("Enter marks in subject %d : ",i);
  scanf("%lf",&y);
  x+=y;
 }
 x=x/a;
 return x;
}

// Series function1 for pi

double pi1 (long int e)
{
 double x=0 ;
 long int i;
 for (i=1; i<=e; i++)
  x=x+(pow(-1,i+1)/(2*i-1));
 return 4*x;
}

// Series function2 for pi

double pi2 (long int e)
{
 double x=0;
 long int i;
 for (i=1; i<=e; i++)
  x=x+ (1/pow(i,2));
 return sqrt(6*x);
}

// Series function3 for pi

double pi3 (long int e)
{
 double x=1;
 double i;
 for (i=2.0; i<=e;i+=2.0)
 {
  x=x*( (2.0+i)*i/pow(i+1.0,2.0));
 }
 return 4*x;
}

// Swap function

void swap (long int x,long int y)
{
 x= x+y;
 y= x-y;
 x= x-y;
 printf("The value of a is %ld and value of b is %ld\n",x,y);
}

// Radius function

double r (double x, double y, double z)
{
 return sqrt(x*x+y*y+z*z);
}

// Theta function

double t (double x, double y, double z)
{
 return atan(sqrt(x*x+y*y)/z);
}

// fi function

double f (double x, double y, double z)
{
 return atan(y/x);
}

// GCD function

long int gcd (long int m,long int n)
{
 if (n==0)
  return m;
 else if (n>m)
  return gcd (n,m);
 else
  return gcd (n,m%n);
}

// Sum of digits function

long int S (long int n)
{
 if (n==0)
  return 0;
 n= (n%10)+ S (n/10);
  return n;
}

// Recursive factorial function

long int F (long int n)
{
 if (n==0)
  return 1;
 n=n*F (n-1);
 return n;
}

// Fibonacci Sequence function

long int FS (long int n)
{
 if ((n==2)||(n==1))
  return 1;
 n= FS (n-1) + FS (n-2);
 return n;
}

// Sum of 1st n +ve numbers

long int S1 (long int n)
{
 if (n==1)
  return 1;
 n= n+ S1 (n-1);
 return n;
}


