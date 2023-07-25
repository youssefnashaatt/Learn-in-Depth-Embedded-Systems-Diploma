#include <stdio.h>


typedef struct
{
	int feet;
	float inch;
}Distance;


int main(void)
{
	Distance D1, D2;
	/*Taking values of D1*/
	printf("Please enter distance D1!\nEnter Feet: ");
	fflush(stdout);
	scanf("%d", &(D1.feet));
	printf("Inches: ");
	fflush(stdout);
	scanf("%f", &(D1.inch));

	/*Taking Values of D2*/
	printf("\nPlease enter distance D2!\nEnter Feet: ");
	fflush(stdout);
	scanf("%d", &(D2.feet));
	printf("Inches: ");
	fflush(stdout);
	scanf("%f", &(D2.inch));

	printf("\nSummation of the two distances");
	printf("\nFeet: %d", D1.feet + D2.feet);
	printf("\nInches: %f", D1.inch + D2.inch);
}
