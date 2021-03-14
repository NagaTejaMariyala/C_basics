/* Progarm to replace a word using command line arguments */
// By M Naga Teja on 14-11-2018

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main (int ac, char *av[])
{
    FILE *f,*t;
    char w[20];

    f=fopen(av[1],"r");
    if (f==NULL)
    {
        printf("Error : opening file");
        exit(1);
    }

    t=fopen("temp","w");
    if (t==NULL)
    {
        printf("Error : opening file");
        exit(1);
    }

    while(fscanf(f,"%s",w)!=EOF)
    {
        if(strcmp(av[2],w)==0)
            fputs(av[3],t);
        else
            fputs(w,t);
        fputs(" ",t);
    }

    fclose(f);
    fclose(t);
    remove(av[1]);
    rename("temp",av[1]);

}
