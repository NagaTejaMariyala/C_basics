/* Header file for implementing polynomial operations using linked lists */
// By M Naga teja On 12-12-2018


#include<stdio.h>
#include<stdlib.h>

struct polynode{
    float coef;
    int exp;
    struct polynode *next;
};
typedef struct polynode* polyptr;



polyptr create_poly();

polyptr add_poly(polyptr p1,polyptr p2);

void display(polyptr h);

polyptr mul_poly(polyptr p1,polyptr p2);

polyptr ins(polyptr p,float coef,int exp);


