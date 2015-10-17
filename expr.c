#include<stdio.h>

void main()
{
	int num,num1,num2;
	printf("Enter two nos:");
	scanf("%d%d",&num,&num1);
	num2=(num>num1)?num:num1;
	printf("%d is greater\n",num2);
}
