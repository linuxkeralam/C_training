#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(int argc, char** argv[])
{
	int fd;
	char* buff;
	fd = open(argv[1], O_RDONLY);
	if ( fd == -1)
	{
		perror("Unable to open file - ");
	}
	
	while ( (read(fd,&buff,1)) == 1)
	{
		//`printf("in while");
		write(1,&buff,1);
	}
}
