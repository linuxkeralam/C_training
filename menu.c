#include <stdio.h>
#include <stdlib.h>

main()
{
	int ch;
	do {
		printf("Menu \n");
		printf("1.Read \n");
		printf("2.Write \n");
		printf("3.Exit \n");
		printf("enter an option: \n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		printf("read\n");
		break;
		case 2:
		printf("Write\n");
		break;
		case 3:
		printf("Exit\n");
		break;
		default:
		printf("Wrong Option\n");
		exit(0);
		
		}
	}while( ch < 3 );

}
