/*
 * EX7.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int a, b;
	int *a_ptr = &a;
	int *b_ptr = &b;

	printf("Please enter value of a:");
	fflush(stdout);
	scanf("%d", &a);

	printf("Please enter value of b:");
	fflush(stdout);
	scanf("%d", &b);

	a = *b_ptr;
	b = *a_ptr;

	printf("\nAfter swapping: a = %d", a);
	printf("\nAfter swapping: b = %d", b);
}

