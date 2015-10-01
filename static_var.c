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
    static int num=10;
    int local_num=10;
    num--;
    local_num--;
    printf("Static Variable - %d Local variable - %d\n",num,local_num);
    num--;
}
