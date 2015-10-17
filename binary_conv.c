#include <stdio.h>
int bin_number[32];
void main()
{
    int number,i,patt=1;
    printf("Enter a number :");
    scanf("%d",&number);
    for(i=31;i>0;i--) {
        bin_number[i]=number % 2;
        number = number / 2;
        if ( number == 0 ) {
            break;
        }
    }
    for(i=0;i<32;i++) {
        printf("%d",bin_number[i]);
    }
    printf("\n");
}
