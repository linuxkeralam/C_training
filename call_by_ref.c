#include<stdio.h>

int inc(int);
void inc_by_ref(int *);
main()
{

	int num,num1=10;
	num=inc(num1);
	inc_by_ref(&num1);
	printf("\nNum1 = %d Num = %d\n",num1,num);
}

inc(int x)
{
	x++;
	return x;
}

void inc_by_ref(int* y)
{
	printf("%d\n",*(y));
	*(y) = 23;
}
