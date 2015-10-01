#include <stdio.h>
void call_fn(void);

void main()
{
    int i;
    for(i=0;i<5;i++)
    call_fn();
}

void call_fn(void)
{
    int num=5;
    num--;
    printf("Number %d\n",num);
    num--;
}
