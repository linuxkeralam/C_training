#include <stdio.h>
int bin_number[32],pat=1;
void show_bin(int);
void shift_left(int,int);
void shift_right(int,int);
void main()
{
    int num,pos;
    printf("How much shifts : ");
    scanf("%d",&pos);
    shift_left(pat,pos);
    pat=1073741824;
    shift_right(pat,pos);
    
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
void shift_left(int num, int pos)
{
    int i,pat;
    for (i=1;i<pos;i++) {
        pat = num << i;
        //printf("%d\n",sizeof(bin_number));
        show_bin(pat);
    }
}
void shift_right(int num, int pos)
{
    int i,patt=256;
    printf("\n%d\n",patt);
    show_bin(patt);
    printf("\n");
    patt = patt >> 2;
    show_bin(patt);
    printf("\n%d\n",patt);
    /*for (i=1;i<pos;i++) {
        num = pat >> i;
        //printf("%d\n",sizeof(bin_number));
        show_bin(num);
    }*/
}
