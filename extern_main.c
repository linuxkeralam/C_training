#include <stdio.h>

extern int count;
extern void write_extern();

main()
{
    printf("Enter a number:");
    scanf("%d",&count);
    write_extern();
}
