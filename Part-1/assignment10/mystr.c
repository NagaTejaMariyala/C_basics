/* Function file for strings */
// By M Naga Teja on 21-08-2018

#include"mystr.h"

// Length of a string function

long int slen(char *s)
{
 long int i=0;
 while (s[i]!=0)
  i++;
 return i;
}


// copy string function

void scp(char *a,char *b)
{
 long int i=0;
 while (b[i]!=0)
 {
  a[i]=b[i];
  i++;
 }
}


// string concatenation function

void scat(char a[],char b[])
{
 int i=0,j=0;
 while (a[i]!=0)
  i++;
 while (b[j]!=0)
 {
  a[i]=b[j];
  i++;
  j++;
 }
}


// Print alternate charaters function

void palt(char *a)
{
 int i=0;
 while (a[i]!=0)
 {
  if (i%2==0)
      printf("%c",a[i]);
  i++;
 }
}


// Substring function

void subs(char ss[], char s[],int p, int l)
{
 int i;
 for (i=p; i<p+l; i++)
  ss[i-p]=s[i];
}


// String compare function

int scmp(char *a, char *b)
{
    int i;
    for(i=0;i<slen(a);i++)
    {
        if(a[i]<b[i])
           return -1;
        else if(a[i]>b[i])
            return 1;
        return 0;
    }
}    


// Print alternate characters in reverse function

void pralt(char s[])
{
 int i;
 i=strlen(s);
 for (; i>=0; i--)
 {
     if (i%2==0)
         printf("%c",s[i]);
 }
}


// Largest string function

long int larg(char a[], char b[])
{
 long int i,j;
 i=strlen(a);
 j=strlen(b);
 if (i<j)
     return 2;
 else if (j<i)
     return 1;
 else
     return 0;
}


// Print vowels function

void pvow(char s[])
{
 int i=0;
 while (s[i]!=0)
 {
     if ((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
         printf("%c",s[i]);
     i++;
 }
}


// No. of vowels function

long int nvow(char s[])
{
 long int i=0,j=0;
 while (s[i]!=0)
 {
     if ((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
       j++;
     i++;
 }
 return j;
}


// No. of each vowels function

void evow(char s[])
{
 int b=0,i=0;
 char c='a';
 while (c!='k')
 {
     b=0;
     i=0;
     while (s[i]!=0)
     {
       if (s[i]==c)
         b++;
       i++;
     }
     printf("No. of %c is %d\n",c,b);
     switch (c)
     {
      case 'A':
      case 'a':
             c='e';
             break;
      case 'E':
      case 'e':
             c='i';
             break;
      case 'I':
      case 'i':
             c='o';
             break;
      case 'O':
      case 'o':
             c='u';
             break;
      case 'U':
      case 'u':
             c='k';
             break;
     
    }
 }
}


// Search string function

long int search(char a[],char k)
{
    long int i;
    for (i=0; i<slen(a); i++)
    {
        if(a[i]==k) 
           return i;
    }
    return -1;
}



// Number of words function

int nword(char *s)
{
    int i,c,j;
    char *t=s;

    for(i=0,c=0;i<slen(t);)
    {
        j=search(t,' ');
        if(j!=-1)
        {
            c++;
            i=j+1;
            subs(t,t,i,slen(t)-j);
        }
        else
            break;
    }    
    return c+1;
}


// Isuppercase function

int upper(char c)
{
    return c>64&&c<91;
}


// Islowercase function

int lower(char c)
{
    return c>96&&c<123;
}


// Isalphabet function

int alpha(char c)
{
    return lower(c)||upper(c);
}


// Isdigit function

int digit(char c)
{
    return c>47&&c<58;
}


// Isalphabetordigit fuction

int alpha_num(char c)
{
    return alpha(c)||digit(c);
}


// Iscontrolcharacter function

int ctrl(char c)
{
    return c!=0&&c<32||c==127;
}


// Ispuctuation function

int punct(char c)
{
    return c>=32&&c<=34||c>=38&&c<=41||c>=44&&c>=59||c==63;
}


// Word swap function

void wswap(char a[],char b[])
{
 int i=0;
 char c[20];
 strcpy(c,a);
 strcpy(a,b);
 strcpy(b,c);
} 


// Word sort function

void wsort(char a[])
{
 int i=0,j,w=1,k;
 char b[20][20];
 while(a[i]!=0)
 {
  if(a[i]==' ')
  {    
   a[i]=0;
   w++;
  } 
  i++;
 } 
 i=0; 
 for(j=0;j<w;j++)
 {
  k=0;
  while(a[i])
  {    
   b[j][k]=a[i];
   i++;
   k++;
  }i++;
  b[j][k]=0;
 }

 for(j=1;j<w;j++)
 {
     for(i=0;i<w-j;i++)    
     {
      if(strcmp(b[i],b[i+1])>0)
      wswap(b[i],b[i+1]); 
     }
 }
 i=0;
 for(j=0;j<w;j++)
 {   
  k=0;
  while(b[j][k])
  {
   a[i]=b[j][k];
   i++;
   k++;
  }
  a[i]=' ';
  i++;
 }
 i--;
 a[i]=0;
}


// Replace word function

void replace(char a[], char x[], char y[])
{
 int i=0,j,w=1,k;
 char b[20][20];
 while(a[i]!=0)
 {
  if(a[i]==' ')
  {    
   a[i]=0;
   w++;
  } 
  i++;
 } 
 i=0; 
 for(j=0;j<=w;j++)
 {
  k=0;
  while(a[i])
  {    
   b[j][k]=a[i];
   i++;
   k++;
  }i++;
  b[j][k]=0;
 }

 for(j=0;j<w;j++)
 {
      if(strcmp(x,b[j])==0)
      wswap(y,b[j]); 
 }
 i=0;
 for(j=0;j<w;j++)
 {   
  k=0;
  while(b[j][k])
  {
   a[i]=b[j][k];
   i++;
   k++;
  }
  a[i]=' ';
  i++;
 } 
 i--;
 a[i]=0;
}

