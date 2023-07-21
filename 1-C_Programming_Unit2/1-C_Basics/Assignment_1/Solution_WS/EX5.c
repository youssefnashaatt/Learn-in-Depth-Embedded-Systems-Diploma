/*
 * EX5.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	char c;
	printf("Please enter a character:");
	fflush(stdout);
	scanf("%c", &c);

	printf("ASCII of character entered is %d", c);
}
