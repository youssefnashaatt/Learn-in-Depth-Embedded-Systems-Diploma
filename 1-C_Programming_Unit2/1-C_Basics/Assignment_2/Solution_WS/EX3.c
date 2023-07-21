/*
 * EX3.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	int num1, num2, num3, max;
	printf("Please enter 3 numbers:\n");
	fflush(stdout);
	scanf("%d %d %d", &num1, &num2, &num3);
	max = (num1 > num2)? ((num1 > num3)? num1 : num3) : ((num2 > num3)? num2 : num3);
	printf("Max No. is: %d" , max);

}
