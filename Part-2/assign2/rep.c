
/* Program to replace a word */
// By M Naga Teja on 17-11-2018

#include<stdio.h>
#include<string.h>

void main(int argc,char *argv[])
{
    FILE *p,*t;
    char word[30],ch;
    
    p=fopen(argv[1],"r");
    if(p==NULL)
    {
        printf("ERROR:File does not exist.");
       // exit(0);
    }

    t=fopen("temp","w");
    
    fscanf(p,"%s",word);
    while(!feof(p))
    {
        ch=fgetc(p);
        if(strcmp(argv[2],word)==0)
            fprintf(t,"%s%c",argv[3],ch);
        else
            fprintf(t,"%s%c",word,ch);
        fscanf(p,"%s",word);
    }
    fclose(p);
    fclose(t);
    remove(argv[1]);
    rename("temp",argv[1]);
}


