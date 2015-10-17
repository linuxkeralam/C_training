#include <stdio.h>
enum Boolean {
	false,
	true
};
typedef enum Boolean bool;
bool getval(int A);

void main()
{
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	if ( getval(a) )
		printf("True\n");
	else
		printf("False\n");
}
bool getval(int A)
{
	if( A == 1 )
		return true;
	else
		return false;
}
