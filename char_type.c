#include <stdio.h>

void main()
{
	unsigned char ch1=1;
	signed char ch2=-127;
	char ch=123;
	while(ch1 > 0) {
	printf("%d\n",ch1++);
	}
	while(ch2 > -128) {
	printf("%d\n",ch2++);
	}
	while(ch >= 0) {
	printf("%d\n",ch++);
	}
}
