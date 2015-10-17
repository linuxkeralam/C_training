#include <stdio.h>
#include <stdlib.h>

struct Marks {
	char Name[30];
	int PHY;
	int CHM;
	int MAT;
	char grade;
	short perc;
};
typedef struct Marks mark_t;

void main()
{
	mark_t *stud1;
	int i;
	stud1 = (mark_t *)malloc(sizeof(mark_t));
	printf("Enter Student name:");
	gets(stud1->Name);
	scanf("%d",&stud1->PHY);
	scanf("%d",&stud1->CHM);
	scanf("%d",&stud1->MAT);
	//stud1->grade = 'A';
	stud1->perc = (stud1->PHY + stud1->CHM + stud1->MAT)/3;
	if ( stud1->perc < 50 )
		stud1->grade = 'C';
	else if ((stud1->perc < 70)&&(stud1->perc > 50))
		stud1->grade = 'B';
		else
			stud1->grade = 'A';

	printf("Student : %s\n",stud1->Name);
	printf("\tPhysics = %d\n\tChemistry = %d\n\tMaths = %d\n\tAverage = %d\n",stud1->PHY,stud1->CHM,stud1->MAT,stud1->perc);
	switch(stud1->grade){
	case 'A':
	printf("The grade is %c\n",stud1->grade);
	printf("Congrats\n");
	break;

	case 'B':
	printf("The grade is %c\n",stud1->grade);
	break;
	
	case 'C':
	printf("The grade is %c\n",stud1->grade);
	printf("Failed in the exams\n");
	break;
	}
	free(stud1);
}
