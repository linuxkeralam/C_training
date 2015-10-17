#include <unistd.h>
#include <stdlib.h>

main()
{
    char buf[100];
    if(read(0,buf,12) != 12)
        write(2,"ERROR",5);
    else
        write(1,buf,12);
}

      
