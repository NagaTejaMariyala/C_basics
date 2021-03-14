/* Program to operate on students information */
// By M Naga Teja on 12-09-2018 

#include"mine.h"

void main()
{
 info a[50];
 int i,n,k,x;
 char b[6];

 printf("\nEnter the no. of students\n");
 scanf("%d",&n);
 getchar();
 for(k=0;k<n;k++)
 {
  printf("\nEnter the name : ");
  gets(a[k].name);
  printf("Enter the gender : ");
  gets(a[k].gen);
  printf("Enter the Regd.no ");
  scanf("%d",&a[k].reg);
  printf("Enter The cgpa : ");
  scanf("%f",&a[k].cgpa);
  printf("Enter the grade : ");
  getchar();
  scanf("%c",&a[k].grade);
  getchar();
  printf("Enter the D.O.B (DD.MM.YYYY):  ");
  scanf("%d.%d.%d",&a[k].b.d,&a[k].b.m,&a[k].b.y);
  printf("Enter the year of joining : ");
  scanf("%d",&a[k].yoj);
  getchar();
 }
  while(1)
  {
      if(i==6)
          break;
   printf("\nTo print the above average students enter [1]\n");
   printf("To print student with a particular Regd. no. enter [2]\n");
   printf("To print students from same batch enter[3]\n");
   printf("To print students with a particular gender enter [4]\n");
   printf("To print students in the crder of cgpa enter [5]\n");
   printf("To exit enter [6]\n");
   scanf("%d",&i);

   switch(i)
   {
      case 1: 
       abvavg(a,n);
       break;
      case 2:
        printf("\nEnter the Regd. no.\n");
        scanf("%d",&x);
        regd(a,n,x); 
       break;
      case 3:
        printf("\nEnte the year : ");
        scanf("%d",&x);
        yoj(a,n,x);
      break;
    
      case 4:
         printf("Gender : \n");
         scanf("%s",&b);
         gen(a,n,b);
       break;
   
      case 5:
        cgp(a,n);
       break;
  }
 }
}

