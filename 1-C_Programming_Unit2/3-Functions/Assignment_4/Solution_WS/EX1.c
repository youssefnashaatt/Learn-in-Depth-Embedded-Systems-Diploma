/*
 * EX1.c
 *
 *  Created on: Jul 13, 2023
 *      Author: Youssef
 */
#include <stdio.h>

void Print_Prime(int, int);

int main(void)
{
	int x, y;
	printf("Please enter two integers !\n");
	fflush(stdout);
	scanf("%d %d", &x, &y);

	printf("Prime Numbers between %d and %d: ", x, y);
	Print_Prime(x, y);

	return 0;
}

void Print_Prime(int x, int y)
{
	int counter = 0;
	char Flag = 1;
	x++;
	while(x < y)
	{
		Flag = 1;
		for(counter = x - 1; counter > 1; counter--)
		{
			if(x % counter == 0)
			{
				Flag = 0;
				break;
			}
		}

		if(Flag)
		{
			printf("%d ", x);
		}
		x++;
	}
}
