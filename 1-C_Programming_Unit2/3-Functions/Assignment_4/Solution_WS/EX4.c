/*
 * EX4.c
 *
 *  Created on: Jul 18, 2023
 *      Author: Youssef
 */
#include <stdio.h>


int PowerWithRecurssion(int base, int power)
{
	static int result = 1;

	if(power >= 1)
	{
		result = result * base;
		PowerWithRecurssion(base, power - 1);
	}

	return result;
}

int main(void)
{
	int base = 2;
	int power = 5;
	printf("2^5 = %d", PowerWithRecurssion(base, power));
}

