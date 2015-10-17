#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>

void main()
{
	FILE *fp;
	int no=10;
	fp = fopen("sample.txt","w");
	char name[]="Anoop Samm";
	fprintf(stdout,"%s,%d",name,no);
	fprintf(fp,"%s,%d",name,no);
	fclose(fp);
}
