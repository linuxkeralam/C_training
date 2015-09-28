#include <stdio.h>
void binary_conv(int num);
int array_bin[32];
void main()
{
	int num1;
	printf("Enter a number : ");
	scanf("%d",&num1);
	binary_conv(num1);
}
void binary_conv(int num)
{
	int binary=0,i=0,j;
	while( num != 0 ) {
	//binary = binary * 10 + (num % 2);
	array_bin[i]=num % 2;
	num = num / 2;
	printf("%d\n",i);
	i++;
	}
	for ( j = 31; j >= 0; j--){
	printf("%d",array_bin[j]);}
	printf("\n");
	
}	
