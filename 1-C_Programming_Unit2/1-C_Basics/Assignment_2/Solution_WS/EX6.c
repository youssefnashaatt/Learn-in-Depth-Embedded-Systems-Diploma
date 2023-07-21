/*
 * EX6.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int sum, counter, n;
	do
	{
		printf("Please enter a positive integer: ");
		fflush(stdout);
		scanf("%d", &n);
	}while(n < 0);

	counter = 1;

	while(counter <= n)
	{
		sum += counter;
		counter++;
	}

	printf("Sum = %d", sum);
}

