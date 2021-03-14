/* Header file for string functions */
// By M Naga Teja on 21-08-2018

#include<stdio.h>
#include<string.h>
#define N 100

long int slen(char *s);

void scp(char *a,char *b);

void scat(char a[],char b[]);

void palt(char *a);

int scmp(char *a, char *b);

void subs(char s[], char ss[],int p, int l);

void paltr(char s[]);

long int larg(char a[], char b[]);

void pvow(char s[]);

long int nvow(char s[]);

void evow(char s[]);

long int search(char a[],char k);

void srch(char *s, char a, int *p);

int nword(char *s);

int upper(char c);

int lower(char c);

int alpha(char c);

int digit(char c);

int alpha_num(char c);

int ctrl(char c);

int punct(char c);

void wswap(char a[],char b[]);

void wsort(char a[]);

void replace(char a[], char x[], char y[]);
