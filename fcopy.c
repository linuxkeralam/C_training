#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

void main(int argc,char **argv)
{
    int fd,fd1,nread;
    char *c;
    if ( argc != 3 )
    {
        printf("Usage: %s <Source file> <Destination file>\n",argv[0]);
        exit(0);
    }
    if ( (fd = open(argv[1], O_RDONLY )) == -1 ) 
    {
        perror("Could not open");
        exit(1);
    }
    if ( (fd1 = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR )) == -1 ) 
    {
        perror("Could not open");
        exit(1);
    }
    //o = read(n,&c,1);
    while ( (nread = read(fd,&c,1)) == 1 ) {
        //o = read(n,&c,1);
        //printf("%c",*c);
        write(fd1,&c,1);
    }
    close(fd);
    close(fd1);
}
