/*
 * EX4.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */


#include <stdio.h>

int main(void)
{
	int x;
	printf("Please enter a number: ");
	fflush(stdout);
	scanf("%d", &x);

	if(x > 0)
	{
		printf("You entered a positive number");
	}

	else if(x < 0)
	{
		printf("You entered a negative number");
	}

	else
	{
		printf("You entered zero !");
	}

	return 0;
}
