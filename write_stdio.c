#include <stdlib.h>
#include <unistd.h>

main()
{
	if (write(1,"Hel World !!!",15) != 15) {
		write(2,"Error",5);
	}
}
