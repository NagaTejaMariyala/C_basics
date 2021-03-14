
/* Program to simulate GREP command */
// By M Naga Teja on 17-11-2018


#include<stdio.h>
#include<string.h>

void main(int ac ,char* av[])
{
    FILE *fp;
    char s[50],*p;

    if(fp=fopen(av[1],"r"))
    {
        while(feof(fp)==0)
        {
            p=fgets(s,50,fp);
            if(strstr(s,av[2])!=NULL)
                printf("%s",s);
        }
        fclose(fp);
    }
}

