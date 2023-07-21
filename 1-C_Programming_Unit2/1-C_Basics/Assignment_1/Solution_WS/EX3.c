/*
 * EX3.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int integer1, integer2;
	printf("Please enter two integers:\n ");
	fflush(stdout);
	scanf("%d %d", &integer1, &integer2);

	printf("Sum of the two integers is %d", integer1 + integer2);
	return 0;
}


