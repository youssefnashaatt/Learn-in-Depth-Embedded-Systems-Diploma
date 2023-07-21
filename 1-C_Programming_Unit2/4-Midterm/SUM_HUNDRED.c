#include <stdio.h>


int SUM_HUNDRED(void)
{
	static int counter = 1;
	static int result = 0;

	if(counter <= 100)
	{
		result += counter;
		counter++;
		SUM_HUNDRED();
	}

	return result;
}

int main(void)
{
	int result;
	result = SUM_HUNDRED();

	printf("Summation of first 100 Numbers --> %d", result);
}
