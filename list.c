#include <stdio.h>
#include <stdlib.h>
struct node {
    int Data;
    struct node * nxt;
};
typedef struct node NODE;

NODE * HEAD=NULL;
NODE * CURR=NULL;

void add_a_node(struct node *);
void list_node(NODE *);
void free_nodes(NODE *);
void main()
{
    int ch,i;
    /*do{
        printf("\n -----------------");
        printf("\n List Options");
        printf("\n -----------------");
        printf("\n 1. Print list");
        printf("\n 2. Delete a node");
        printf("\n 3. Search a pattern");
        printf("\n 4. Delete a range");
        printf("\n 5. Insert a node");
        printf("\n 6. Quit");
        printf("\n -----------------");
        printf("\n Enter the choice: ");
        scanf("%d",&ch);
    }while (ch < 6);*/
    add_a_node(HEAD);
    for (i=0;i < 5;i++)
    add_a_node(CURR);

    list_node(HEAD);
    //list_node(CURR);

}

void add_a_node(struct node * t_pos)
{
    NODE * TMP = NULL;
    TMP = malloc(sizeof(NODE));
    printf("Enter the data : ");
    scanf("%d",&TMP->Data);
    TMP->nxt = NULL;
    if ( HEAD == NULL ) {
        printf("Head is null\n");
        HEAD = TMP;
        CURR = TMP;
    }
    else {
    CURR->nxt = TMP;
    CURR = TMP;
    }
}

void list_node(NODE * pos)
{
    int count=1;
    while ( pos->nxt != NULL ) {
        printf("\n----------\nNode - %d\n----------\nData -> %d\n----------\n",count , pos->Data);
        count++;
        pos = pos->nxt;
    }
        printf("\n----------\nNode - %d\n----------\nData -> %d\n----------\n",count , pos->Data);
        //printf("Data -> %d",pos->Data);
}
