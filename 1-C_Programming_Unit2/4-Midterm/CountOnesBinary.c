#include <stdio.h>


int BinaryCountOnes(int num)
{
	int result = 0;

	while(num != 0)
	{
		if(num & (1<<0))
		{
			result++;
		}

		num = num >> 1;
	}

	return result;
}

int main(void)
{
	int input_1 = 5;
	int input_2 = 15;

	printf("Ones Count in Binary representation of (%d) --> %d", input_1, BinaryCountOnes(input_1));
	printf("\nOnes Count in Binary representation of (%d) --> %d", input_2, BinaryCountOnes(input_2));
}
