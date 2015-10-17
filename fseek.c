#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

void main(int argc, char *argv[])
{
    int fd,i;
    char ch[10];
    if ( (fd = open(argv[1], O_RDONLY)) == -1 )
        {
                perror("Could not open file");
                exit(0);
                }
        lseek(fd,-10L,SEEK_END);
        read(fd,&ch,10);
        //printf("%s\n",ch);
        write(1,&ch,10);

    
        close(fd);         
}
