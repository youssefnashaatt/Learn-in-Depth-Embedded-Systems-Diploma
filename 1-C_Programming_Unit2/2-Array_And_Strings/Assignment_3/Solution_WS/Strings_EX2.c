/*
 * Strings_EX2.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	char str[100];
	int counter = 0;

	printf("Please enter a string: ");
	fflush(stdout);
	gets(str);

	printf("%s", str);

	while(str[counter] != '\0')
	{
		counter++;
	}

	printf("Length of string is %d", counter);
}
