#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(int argc,char **argv)
{
    int fd,nread;
    char *c;
    if ( argc !=2 )
    {
        printf("Usage: %s <file name>\n",argv[0]);
        exit(0);
    }
    if ( (fd = open(argv[1], O_RDONLY )) == -1 ) 
    {
        perror("Could not open");
        exit(1);
    }
    while ( (nread = read(fd,&c,1)) == 1 ) {
        write(1,&c,1);
    }
    close(fd);
}
