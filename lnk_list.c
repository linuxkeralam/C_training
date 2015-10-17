#include <stdio.h>
#include <stdlib.h>

/*Global Variables*/
struct node {
    int Data;
    struct node* nxt;
};
typedef struct node node_t;
node_t *curr_ptr=NULL;
node_t *HEAD=NULL;
short NODE_LEN;
/* Linked List Functions */
node_t * list_init(void);
//void disp_list(node_t *);
void disp_list();
void del_list(node_t *);
void add_node(int pos, int data);
void del_node(int pos);
void find_node_from_last(int pos);

void main()
{
    printf("size of struct node - %lu\n", sizeof(node_t));
    HEAD=list_init();
    //disp_list(HEAD);
    disp_list();
    add_node(3,745);
    disp_list();
    add_node(2,345);
    disp_list();
    add_node(4,845);
    disp_list();
    add_node(4,945);
    disp_list();
    add_node(1,1945);
    find_node_from_last(2);
    find_node_from_last(1);
    find_node_from_last(4);
    del_node(2);
    disp_list();
    del_node(4);
    disp_list();
    del_list(HEAD);
}
node_t * list_init(void)
{
    node_t *first=NULL;
    node_t *second=NULL;
    node_t *third=NULL;
    first=malloc(sizeof(node_t));
    second=malloc(sizeof(node_t));
    third=malloc(sizeof(node_t));
    first->Data = 100;
    first->nxt = second;
    second->Data = 1300;
    second->nxt = third;
    third->Data = 1900;
    third->nxt = NULL;
    NODE_LEN = 3;
    return first;
}

//void disp_list(node_t *head)
void disp_list()
{
    curr_ptr = HEAD;
    printf("-----------------------------------\n");
    while(curr_ptr != NULL)
    {
        printf("|%d|-->",curr_ptr->Data);
        curr_ptr = curr_ptr->nxt;
    }
    printf("NULL\n");
    printf("-----------------------------------\n");
}

void del_list(node_t *head)
{
    node_t *tmp;
    curr_ptr = head;
    while(curr_ptr != NULL) {
        printf("Freeing node with data - %d\n",curr_ptr->Data);
        tmp = curr_ptr->nxt;
        free(curr_ptr);
        curr_ptr = tmp;
    }
}

void add_node(int pos, int data)
{
    int count=0;
    node_t *tmp;
    if ( NODE_LEN < pos )
    {
        perror("Position exceeds current limit");
        del_list(HEAD);
        exit(1);
    }
    curr_ptr = HEAD;
    if ( pos == 1 )
    {
        printf("add a new node on position - %d  Data - %d \n",pos,data);
        tmp = malloc(sizeof(node_t));
        tmp->Data = data;
        tmp->nxt = curr_ptr;
        HEAD = tmp;
        NODE_LEN++;
        disp_list();
        //pos = 0;
    }
        
    while(curr_ptr != NULL) {
        count++;
        //printf("__add_node count=%d  pos=%d\n",count,pos);
        //tmp = curr_ptr;
        if( count == (pos-1))
        {
            printf("add a new node on position - %d  Data - %d \n",pos,data);
            tmp = malloc(sizeof(node_t));
            tmp->Data = data;
            tmp->nxt = curr_ptr->nxt;
            curr_ptr->nxt = tmp;
            NODE_LEN++;
            break;
        }
        curr_ptr = curr_ptr->nxt;
    }
}

void del_node(int pos)
{
    int count=0;
    node_t *tmp;
    curr_ptr = HEAD;
    while(curr_ptr != NULL) {
        count++;
        tmp = curr_ptr;
        curr_ptr = curr_ptr->nxt;
        //printf("__add_node count=%d  pos=%d tmp=%d Curr=%d\n",count,(pos-1),tmp->Data,curr_ptr->Data);
        if ( count == (pos-1) )
        {
            printf("Deleting node - %d  values Curr=%d\n",pos,curr_ptr->Data);
            tmp->nxt = curr_ptr->nxt;
            free(curr_ptr);
            NODE_LEN--;
            break;
        }
    }
}


void find_node_from_last(int pos)
{
    node_t *slow, *fast;
    int count = 0,SLOW=0;
    fast = HEAD->nxt;
    while ( fast != NULL ) {
        count++;
        if ( count == pos )
        {
            slow = HEAD;
            SLOW = 1;
            //continue;
        }
        if( SLOW == 1 )
        {
            slow = slow->nxt;
        }
        fast = fast->nxt;
    }
    printf("-----------------------------------\n");
    printf("\t %d element from back = %d\n",pos,slow->Data);
    printf("-----------------------------------\n");
}
