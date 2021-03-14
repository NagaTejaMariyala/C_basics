/* Program to change case of a file */
// By M Naga Teja on 22-10-2018

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f1,*f2;
    char c;
    
    f1=fopen("input.txt","r+");
    f2=fopen("temp","w+");

    if (f1==NULL)
    {
        printf("Unable to open filen\nExiting\n");
        exit(1);
    }

    while ((c=fgetc(f1))!=EOF)
        if(isupper(c))
            fputc(tolower(c),f2);
        else if (islower(c))
            fputc(toupper(c),f2);
        else
            fputc(c,f2);

    rewind(f2);

    while((c=fgetc(f2))!=EOF)
        printf("%c",c);

    remove("input.txt");
    rename("temp","input.txt");

}
