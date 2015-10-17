#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr,i;
    ptr = calloc(5, sizeof(int));
    for(i=0;i<5;i++)
        *(ptr + i) = i;
    for(i=0;i<5;i++)
        printf("%d\t",*(ptr+i));

    free(ptr);

}
