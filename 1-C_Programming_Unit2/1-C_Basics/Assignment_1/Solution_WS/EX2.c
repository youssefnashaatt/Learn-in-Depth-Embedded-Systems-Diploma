/*
 * EX2.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	int integer;
	printf("Please enter an integer:");
	fflush(stdout);
	scanf("%d", &integer);

	printf("The integer you entered is %d", integer);

	return 0;
}
