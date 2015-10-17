#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(int argc,char **argv)
{
    int fd,nread;
    char *c,buff[128];
    if ( argc !=2 )
    {
        printf("Usage: %s <file name>\n",argv[0]);
        exit(0);
    }
    if ( (fd = open(argv[1], O_RDONLY )) == -1 ) 
    {
        perror("Could not open");
        //exit(1);
    }
    lseek(fd,-128L,SEEK_END);
    read(fd,buff,128);
    write(1,&buff,128);
    write(1,"\n----------------Tag Info----------------",42);
    lseek(fd,-128L,SEEK_END);
    read(fd,buff,3);
    write(1,"\nTag Info : ",13);
    write(1,&buff,3);
    lseek(fd,-125L,SEEK_END);
    read(fd,buff,30);
    write(1,"\nSong Title : ",15);
    write(1,&buff,30);
    lseek(fd,-95L,SEEK_END);
    read(fd,buff,30);
    write(1,"\nArtist : ",11);
    write(1,&buff,30);
    lseek(fd,-65L,SEEK_END);
    read(fd,buff,30);
    write(1,"\nAlbum : ",10);
    write(1,&buff,30);
    lseek(fd,-35L,SEEK_END);
    read(fd,buff,4);
    write(1,"\nYear : ",9);
    write(1,&buff,4);
    lseek(fd,-31L,SEEK_END);
    read(fd,buff,30);
    write(1,"\nComment : ",11);
    write(1,&buff,29);
    lseek(fd,-1L,SEEK_END);
    read(fd,buff,1);
    write(1,"\nGenre : ",10);
    write(1,&buff,1);
    write(1,"\n----------------------------------------",42);
}
