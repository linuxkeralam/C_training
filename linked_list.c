#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node L_node;

void main()
{
    struct node* a=NULL;
    struct node* b=NULL;
    struct node* c=NULL;
    struct node* d=NULL;
    struct node* HEAD=NULL;
    int count=0;

    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));
    d = malloc(sizeof(struct node));
    a->data = 100;
    a->next = b;
    b->data = 200;
    b->next = c;
    c->data = 300;
    c->next = d;
    d->data = 400;
    d->next = NULL;

    HEAD = a;
    while(HEAD->next != NULL) {
        printf("%d\n",HEAD->data);
        count++;
        HEAD = HEAD->next;
    }
        printf("%d\n",HEAD->data);
        printf("Length %d\n",count);
    free(a);
    free(b);
    free(c);
    free(d);
}
