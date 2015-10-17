#include <stdio.h>

void read_mat(int matr[2][3]);
void read_mat_ptr(int *matr);
void read_mat_dptr(int **matr);

void main()
{
    int mat[2][3]={{1,2,3},{22,33,44}};
    printf("--------------------------------\n");
    printf("The array pointer mat - %p\n",mat);
    printf("--------------------------------\n");
    read_mat(mat);
    printf("--------------------------------\n");
    read_mat_ptr(mat);
    printf("--------------------------------\n");
    read_mat_dptr(mat);
    printf("--------------------------------\n");
}
/* Using the normal way of passing the matrix */
void read_mat(int matr[2][3])
{
    int i,j;
    for(i=0;i<2;i++) {
        printf("\n");
        for(j=0;j<3;j++) {
            printf("%d\t",matr[i][j]);
        }
        printf("\n");
    }
}

/* Passing a single pointer to access the matrix*/
void read_mat_ptr(int *matr)
{
    int i,j;
    for(i=0;i<2;i++) {
        printf("\n");
        for(j=0;j<3;j++) {
            printf("%d\t",*(matr++));
        }
        printf("\n");
    }
}

/* Using a double pointer to access the matrix*/
void read_mat_dptr(int **matr)
{
    int *index[2],i,j;
    for(i=0;i<2;i++) // This is kind assigning boundaries
        index[i] = (int *)matr + 3*i; // Assigning pointer to array of a 2d array
    for(i=0;i<2;i++) {
        printf("\n");
        for(j=0;j<3;j++) {
            printf("%d\t",index[i][j]);
        }
        printf("\n");
    }
}
