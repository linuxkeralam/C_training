#include <stdio.h>
void read_mat(int *);
void read_mat_dp(int **ptr);
void main()
{
	int *a;
	b=10;
	int mat[3][3] = {{11,12,13},{21,22,23},{31,32,33}},i,j;

	printf("The Matrix 3X3 \n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		printf("%d\t",mat[i][j]);
		}
	printf("\n");
	}
	read_mat(mat);
	read_mat_dp(mat);
}

void read_mat(int *ptr)
{
	int i,j,*mat;
	mat = (int *)ptr;
	printf("\n");

	for (i=0;i<3;i++) {
		//mat = mat+(i*3);
		for (j=0;j<3;j++) {
		printf("%d\t",*(mat+(i*3)+j));
		}
	printf("\n");
	}
}

void read_mat_dp(int **ptr)
{
	int i,j,*mat[3];
	//mat = (int **)ptr;
	for(i=0;i<3;i++)
		mat[i]=(int *)ptr+i;
	printf("\n");

	for (i=0;i<3;i++) {
		//mat = mat+(i*3);
		for (j=0;j<3;j++) {
		printf("%d\t",**(mat+(i*3)+j));
		//printf("%d\t",**(ptr+(i*3)+j));
		//printf("%d\t",mat[i][j]);
		}
	printf("\n");
	}
}

