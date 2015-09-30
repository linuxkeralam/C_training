#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(int argc, char** argv[])
{
	int fd;
	if (argc != 2)
	{
		printf("Wrong usage \n");
		exit(0);
	}
	fd = open(argv[1], O_CREAT, S_IRUSR | S_IRGRP );
	if ( fd == -1)
	{
		perror("Unable to open file - ");
	}
	
}
