#include <stdio.h>

void binary_conv(int num)
{
	int binary=0;
	while( num != 0 ) {
	binary = binary * 10 + (num % 2);
	num = num / 2;
	}
	printf("Binary is - \t%d \n",binary);
	
}	
