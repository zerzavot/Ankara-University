#include<stdio.h>

int main()
{

	struct student
	{
	int roll_no;
	char name[50];
	float fees;
	char DOB[80];

	};
	struct student stud1;
	clrscr();
	printf("\n enter the roll number: ");
	scanf("%d",stud1.roll_no);
	printf("\n enter the name: ");
	scanf("%d",stud1.name);
	printf("\n enter the fees: ");
	scanf("%d",stud1.fees);
	printf("\n enter the DOB: ");
	scanf("%d",stud1.DOB);
	printf("\n *** STUDENT DETAILS ***\n");
	printf("\n ROLL no: %d",stud1.roll_no);
	printf("\n NAME %s",stud1.name);
	printf("\n FEES %f",stud1.fees);
	printf("\n DOB %s",stud1.DOB);
	
	return 0;

}
