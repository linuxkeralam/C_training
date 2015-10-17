#include <stdio.h>
#include <types.h>
int bin_number[32];
void show_bin(int num);
void main()
{
    int pat=0x7,num,result,num_neg;
    uin
    
    printf("Enter a number :");
    scanf("%X",&num);
    printf("The number and its Binary \n%X\n",num);
    show_bin(num);
    result = num & pat;
    printf("extracting last 3 bits \n%X\n",result);
    show_bin(result);
    result = num | pat;
    printf("setting last 3 bits \n%X\n",result);
    show_bin(result);
    result = num ^ pat;
    printf("toggling last 3 bits \n%X\n",result);
    show_bin(result);
    printf("The number and its Binary \n%X\n",num);
    show_bin(num);
    num_neg = ~num;
    printf("The negated number and its Binary \n%X\n",num_neg);
    show_bin(num_neg);
}

void show_bin(int num)
{
    int i;
    for(i=0;i<32;i++){
        bin_number[i]=0;
    }
    for(i=31;i>0;i--) {
        bin_number[i]=num % 2;
        num = num / 2;
        if ( num == 0 ) {
            break;
        }
    }
    for(i=0;i<32;i++) {
        printf("%d",bin_number[i]);
    }
    printf("\n");
}
