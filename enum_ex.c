#include <stdio.h>
enum Boolean
{
    false,
    true
};
typedef enum Boolean bool;
bool check_val(int);
void main()
{
    int i;
    bool j;
    printf("Enter a number : ");
    scanf("%d",&i);
    if ( check_val(i) )
        { 
            printf("True\n");
        }
        else
        { 
            printf("False\n");
        }
}

bool check_val(int a)
{
    if( a == 1 )
        return true;
    else
        return false;
}
