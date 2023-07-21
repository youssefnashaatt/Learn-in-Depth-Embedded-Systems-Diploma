/*
 * EX3.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	float num1, num2;
	printf("Please enter two float numbers:\n ");
	fflush(stdout);
	scanf("%f %f", &num1, &num2);

	printf("Product is %f", num1 * num2);
	return 0;
}


