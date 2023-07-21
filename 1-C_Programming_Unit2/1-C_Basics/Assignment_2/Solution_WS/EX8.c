/*
 * EX8.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	char operator;
	int a, b, result;
	int i = 4;
	int j = (++i)++;

	printf("Please enter an operator: ");
	fflush(stdout);
	scanf("%c", &operator);

	printf("Please enter two intergers:\n");
	fflush(stdout);
	scanf("%d %d", &a, &b);

	switch(operator)
	{
	case '+':
		result = a + b;
		break;

	case '-':
		result = a - b;
		break;

	case '*':
		result = a * b;
		break;

	case '/':
		result = a / b;
		break;

	default:
		result = 0;
	}

	printf("Result of a %c b = %d", operator, result);
}

