/*
 * EX7.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int factorial, counter, n;
	printf("Please enter an integer: ");
	fflush(stdout);
	scanf("%d", &n);

	if(n < 0)
	{
		printf("Factorial doesn't exist");
	}

	else if(n == 0 || n == 1)
	{
		printf("Factorial = 1");
	}

	else
	{
		factorial = n;
		counter = n - 1;
		while(counter > 1)
		{
			factorial *= counter;
			counter--;
		}
	}

	printf("Factorial = %d", factorial);
}

