#include <unistd.h>
#include <stdlib.h>

int main()
{
    if (write(1, "how how how", 11) !=11)
        write(2,"error",5);
}

