/*
 * EX2.c
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

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		printf("Character entered is vowel");
	}

	else
	{
		printf("Character entered is consonant");
	}
}
