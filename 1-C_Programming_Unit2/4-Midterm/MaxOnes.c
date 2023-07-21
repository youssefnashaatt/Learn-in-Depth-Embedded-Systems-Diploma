#include <stdio.h>



int MaxOnes(int num)
{
	int count = 0, MaxCount = 0;

	while(num != 0)
	{
		if(num & (1<<0))
		{
			count++;

			if(count > MaxCount)
			{
				MaxCount = count;
			}
		}

		else
		{
			count = 0;
		}

		num = num >> 1;
	}

	return MaxCount;
}

int main(void)
{
	int input_1 = 14;
	int input_2 = 110;

	printf("Maximum consequent ones in %d is --> %d", input_1, MaxOnes(input_1));
	printf("\nMaximum consequent ones in %d is --> %d", input_2, MaxOnes(input_2));
}
