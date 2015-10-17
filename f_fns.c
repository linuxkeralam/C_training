#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch[30],ch1='Y',ch2='\n';
    int i=65,c;
    FILE *fp,*fp1;
    fp = fopen("sample.txt","r");
    if ( fp == NULL )
    {
        perror("Error in opening file");
        exit(-1);
    }
    fp1 = fopen("sample.out","w");
    if ( fp1 == NULL )
    {
        perror("Error in opening file");
        exit(-1);
    }
    do {
        c = getc(fp);
        if (feof(fp))
        {
            break;
        }
        fputc(c,fp1);
        printf("%c",c);
    }while(1);
    /*fgets(&ch,29,stdin);
    fputs(ch,fp);
    //printf("%s\n",ch);
    //printf("Do you wnat to continue(Y/N):\n");
    while ( (ch1=fgetc(fp)) != EOF )
        fputc(68,stdout);*/

    //fputc(i,stdout);
    //fputc(ch1,stdout);
    //fputc(ch2,stdout);
    fclose(fp);
    fclose(fp1);
}
