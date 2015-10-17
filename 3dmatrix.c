#include <stdio.h>
void read_mat(int **mat_ptr);
void main()
{
    int mat[4][2]={{11,12},{21,22},{31,32},{41,42}};
    int i,j,**ptr;
    ptr = (int *)mat[0];
    for(i=0;i<4;i++)
        printf("%d\n",*(mat[i]));
        
    printf("\nDP");
    for(i=0;i<4;i++){
        for(j=0;j<2;j++) {
        printf("%d\n",ptr[i][j]);
        }
    }
    read_mat(mat);
}
void read_mat(int **mat_ptr)
{
    int *mat[4],i,j;
    
    for(i=0;i<4;i++)
        mat[i] = (int *)mat_ptr+2*i;
        
        printf("Matrix\n");
    for(i=0;i<4;i++) {
        for(j=0;j<2;j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
