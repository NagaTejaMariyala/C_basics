/* Program to find nth term of fibonacci sequence */
// By M Naga Teja on 11-07-2018
#include"mine.h"
void main()
{
 long int m;
 
 printf("Enter the term number of fibonacci sequence: ");
 scanf("%ld",&m);

 printf("The %ldth term of the fibonacci sequence is %ld\n",m,FS(m));
}
