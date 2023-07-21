#include <stdio.h>

#define TRUE 1
#define FALSE 0

void PrintPrime(int start, int end)
{
	char Print_flag;

	while(start < end)
	{
		Print_flag = TRUE;

		for(int i = 0; i < start; i++)
		{
			for(int j = 0; j < start; j++)
			{
				if(start == (i * j))
				{
					Print_flag = FALSE;
				}
			}
		}

		if(Print_flag)
		{
			printf("%d ", start);
		}
		start++;
	}
}

int main(void)
{
	int start = 1;
	int end = 20;
	printf("The Prime Numbers between %d and %d: ",start, end);
	PrintPrime(1,20);
}
