#include <stdio.h>

main()
{
	int *ptr, num=10, num1=20;
	printf("Pointer - ptr = %u num = %d num1= %d\n",ptr,num,num1);
	printf("num - ptr = %u\n",&num);
	ptr = &num;
	printf("Pointer - ptr = %u num = %d num1= %d\n",ptr,num,num1);
	printf("Content of ptr - %d\n",*ptr);
	printf("num - ptr = %u\n",&num1);
	//ptr = &num1;
	ptr++;
	printf("Pointer - ptr = %u num = %d num1= %d\n",ptr,num,num1);
	printf("Content of ptr - %d\n",*ptr);
	ptr++;
	printf("Pointer - ptr = %u num = %d num1= %d\n",ptr,num,num1);
	printf("Content of ptr - %d\n",*ptr);
	*ptr = 123;


}
