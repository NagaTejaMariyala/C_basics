/* Program to convert cartesian coordinates to spherical coordinates */
// By M Naga Teja on 
#include"mine.h"
void main ()
{
 double x,y,z;
 printf("Enter the coordinates (x,y,z): ");
 scanf("%lf%lf%lf",&x,&y,&z);
 
 printf("The spherical coordinates are (%lf,%lf,%lf)\n",\
        r(x,y,z),t(x,y,z),f(x,y,z));
}
