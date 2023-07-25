#include <stdio.h>


typedef struct
{
	char Name[20];
	int Roll;
	float Mark;
}Student;

int main(void)
{
	Student S1;

	printf("Please enter student's Name: ");
	fflush(stdout);
	gets(S1.Name);

	printf("Please enter student's Roll: ");
	fflush(stdout);
	scanf("%d", &(S1.Roll));

	printf("Please enter student's mark: ");
	fflush(stdout);
	scanf("%f", &(S1.Mark));

	/*Printing Results*/
	printf("\n\nStudent's Name: %s", S1.Name);
	printf("\nStudent's Roll: %d", S1.Roll);
	printf("\nStudent's Mark: %f", S1.Mark);
}
