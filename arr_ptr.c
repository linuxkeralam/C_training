#include<stdio.h>

void print_array(int (*ptr)[3]);
void print_array_ptr(int **ptr1);

void main()
{
    int arrd[5]={111,2222,333,444,5555},*arr_ptr,i;
    int arr[3][3]={{11,12,13},{21,22,23},{31,32,33}}, **ptr_2darr,j;

    for(i=0;i<5;i++)
        printf("\t%d\n",*(arrd+i));
    printf("------------------------------------------------\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
                //printf("\t%d",**(arr+i+j));
                printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------------------\n");
    print_array(arr);
    printf("------------------------------------------------\n");
    ptr_2darr = (int **)arr;
    print_array_ptr(arr);
    //print_array_ptr(ptr_2darr);

}

void print_array(int (*ptr)[3])
{
    int i,j;
                printf("\t%d\n",(*ptr)[0]);
                printf("\t%d\n",(*ptr)[1]);
    /*for(i=0;i<3;i++) {
        ptr = ptr +i;
        for(j=0;j<3;j++) {
                printf("\t%d",**(ptr+j));
        }
        printf("\n");
    }*/
}
void print_array_ptr(int **ptr1)
{
    int i,j,*x[3];
                /*printf("\t%d\n",*(ptr1));
                ptr1++;
                printf("\t%d\n",*(ptr1));
                ptr1++;
                printf("\t%d\n",*(ptr1));
                ptr1++;
                printf("\t%d\n",*(ptr1));*/
    for(i=0;i<3;i++) 
        x[i] = (int *) ptr1 + 3*i;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
                printf("\t%d",x[i][j]);
        }
        printf("\n");
    }

}

