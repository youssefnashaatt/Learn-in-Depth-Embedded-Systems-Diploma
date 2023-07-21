/*
 * Strings_EX1.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	char str[100];
	char c;
	int counter, frequency = 0;

	printf("Please enter a string: ");
	fflush(stdout);
	gets(str);

	printf("%s", str);

	printf("\n\nEnter the character to check frequency for: ");
	fflush(stdout);
	scanf("%c", &c);

	counter = 0;
	while(str[counter] != '\0')
	{
		if(str[counter] == c)
		{
			frequency++;
			counter++;
		}

		else
		{
			counter++;
		}

	}

	printf("Frequency of letter %c is %d", c, frequency);

}

