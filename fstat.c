#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(int argc, char *argv[])
{
	int fd,i;
	struct stat st;

	fd = open(argv[1],O_RDONLY);
	if( fd == -1 ) 
	{
		perror("Unable to open file");
		exit(0);
	}
	fstat(fd,&st);
    	switch (st.st_mode & S_IFMT) { 
           case S_IFBLK:  printf("block device\n");            break; 
           case S_IFCHR:  printf("character device\n");        break; 
           case S_IFDIR:  printf("directory\n");               break; 
           case S_IFIFO:  printf("FIFO/pipe\n");               break; 
           case S_IFLNK:  printf("symlink\n");                 break; 
           case S_IFREG:  printf("regular file\n");            break; 
           case S_IFSOCK: printf("socket\n");                  break; 
           default:       printf("unknown?\n");                break; 
           } 

	close(fd);
}
