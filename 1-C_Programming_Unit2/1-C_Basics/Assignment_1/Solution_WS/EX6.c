/*
 * EX6.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	float a, b, temp;
	printf("Please enter value of a:");
	fflush(stdout);
	scanf("%f", &a);

	printf("Please enter value of b:");
	fflush(stdout);
	scanf("%f", &b);

	temp = a;
	a = b;
	b = temp;

	printf("\nAfter swapping: a = %f", a);
	printf("\nAfter swapping: b = %f", b);
}

