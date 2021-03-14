/* Program to copy files */
// By M Naga Teja on 20-10-2018

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f1,*f2;
    char c,ip[15],op[15];

    printf("Enter the input file\n");
    gets(ip);
    printf("Enter the output file\n");
    gets(op);

    f1=fopen(ip,"r");
    f2=fopen(op,"w+");

    if(f1==NULL||f2==NULL)
    {
        printf("Couldn't open file\nExiting");
        exit(1);
    }

    while((c=fgetc(f1))!=EOF)
    {
        fputc(c,f2);
    }

    rewind(f2);

    while((c=fgetc(f2))!=EOF)
        printf("%c",c);
}
