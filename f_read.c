#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(int argc, char **argv[])
{
	int i,fdes;
	char buff[20];
	//const char* filename[]=argv[1];
	/*if ( argc != 2 )
	{
		write(2,"Error Wrong usage",17);
		printf("Usage:\n read_file <Filename>");
		exit(0);
	}*/
	/*if (fdes=open(filename,O_RDONLY) == -1 )
		{
			perror("Unable to open file");
			exit(1);
		}*/
	fdes=open("sam",O_RDONLY);
	printf("\nFdes : %d",fdes);
	i=read(fdes,buff,20);
	printf("\nread bytes : %d",i);
	write(1,buff,20);
	close(fdes);
	
	//printf("No of command line para : %d\n",argc);
	//for(i=0;i<argc;i++)
		//printf("argv[%d] - %s\n",i,argv[i]);
}
