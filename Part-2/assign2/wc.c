/*  Program for counting number of words in the given file  */
// By M Naga Teja on 17-11-2018

#include <stdio.h>
#include <ctype.h>

void main( int argc , char *argv[] )
{
    FILE *fp;
    char *w;
    int count=0;
    fp= fopen( argv[1],"r" );
    if(fp==NULL)
    {
        printf("\n Error in Opening file .\n ");
        return;
    }
    while(fscanf(fp,"%s",w)!=EOF)
    {
            count++;
    }
    printf("\n The Number of words :%d .\n",count);
    fclose(fp);
}





