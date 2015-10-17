#include <stdio.h>

void main()
{
	unsigned char ch=0;
	int i;
	short val;
	for(i=0;i<=255;i++) {
		printf("char %c int %d\n",ch,(int)ch);
		ch++;
	}
}
