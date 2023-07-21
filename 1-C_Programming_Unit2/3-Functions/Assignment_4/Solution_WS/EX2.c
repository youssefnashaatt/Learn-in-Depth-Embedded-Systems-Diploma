/*
 * EX2.c
 *
 *  Created on: Jul 13, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int factorial(int x);

int main(void)
{
	int x;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &x);

	printf("Factorial of number %d is %d", x, factorial(x));
}

int factorial(int x)
{
	if(x == 0 || x == 1)
		return 1;

	return x * factorial(x - 1);
}
