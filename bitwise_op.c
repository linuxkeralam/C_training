#include <stdio.h>
#include  "lib.h"
//void binary_con(int);
void main()
{
	int b=0x1,i;
	for(i=0;i<31;i++) {
	b = b << 1;
	binary_conv(b);
	printf("\t%x\n",b);
	}
}
/*void binary_con(int num)
{
	int i;
	char ch[32];
	while(num != 0)
	{
		printf("%x", num % 2 );
		//num = num % 2;
	}
}*/
