#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>

int main(int argc, char** argv)
{
    int fd;
    char c;
    char str[100];
    printf("opening file-%s", argv[1]);
    fd = open(argv[1], O_RDWR);
    if (fd == -1){
        perror(argv[1]);
        exit(errno);
    }
   
    read(0,str,100);
    printf("%s\n",str);
    
    write(fd,&str,100);
    while( read(fd,&c,1) == 1){
        printf("%c",c);
    //write(2,&c,1);
    }
        printf("\n");
    close(fd);

    fprintf(stdout, "from fprintf");
}
