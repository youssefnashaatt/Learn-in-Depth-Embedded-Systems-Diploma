#include <stdio.h>
#include <math.h>


double SQRT(int num)
{
	return sqrt(num);
}

int main(void)
{
	int input_1 = 4;
	int input_2 = 10;

	printf("Square root of integer (4) is: %.3lf",SQRT(input_1));
	printf("\nSquare root of integer (10) is: %.3lf",SQRT(input_2));
}
