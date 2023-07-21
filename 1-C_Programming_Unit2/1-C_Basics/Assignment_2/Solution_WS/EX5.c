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
	printf("Please enter a character: ");
	fflush(stdout);
	scanf("%c", &c);

	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		printf("You entered alphabetic character !");
	}

	else
	{
		printf("You entered a non alphabetic character !");
	}
}

