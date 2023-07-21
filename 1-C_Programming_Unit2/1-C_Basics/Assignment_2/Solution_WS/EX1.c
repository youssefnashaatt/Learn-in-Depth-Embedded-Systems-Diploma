/*
 * EX1.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int integer;
	printf("Please enter the value you want check:");
	fflush(stdout);
	scanf("%d", &integer);

	if(integer % 2)
	{
		printf("The No. is odd");
	}

	else
	{
		printf("The No. is even");
	}
}

