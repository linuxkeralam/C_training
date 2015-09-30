#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(int argc, char** argv[])
{
	int fd,fd1;
	char* buff;
	if ( argc != 3 )
	{
		printf(" Wrong Usage \n");
		exit(0);	
	}
	fd = open(argv[1], O_RDONLY);
	if ( fd == -1)
	{
		perror("Unable to open file - ");
	}
	fd1 = open(argv[2], O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if ( fd1 == -1)
	{
		perror("Unable to open file - ");
	}
	
	while ( (read(fd,&buff,1)) == 1)
	{
		//`printf("in while");
		write(fd1,&buff,1);
	}
	
	close(fd);
	close(fd1);
}
