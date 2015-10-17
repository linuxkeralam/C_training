#include<stdio.h>
struct sample
{
    char c;
    unsigned int* up;
    short x;
    int v;
    char k;
};
struct sample1
{
    unsigned int* up;
    int v;
    short x;
    char k;
    char c;
};


void main()
{
    struct sample ex;
    printf("Size of structure %lu\n",sizeof(ex));
    printf("Size of structure %lu\n",sizeof(struct sample));
    printf("Size of structure %lu\n",sizeof(struct sample1));
}
