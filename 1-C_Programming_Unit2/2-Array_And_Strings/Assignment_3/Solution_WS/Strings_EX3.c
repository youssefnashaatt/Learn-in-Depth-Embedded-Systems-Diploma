/*
 * Strings_EX3.c
 *
 *  Created on: Jul 10, 2023
 *      Author: Youssef
 */

#include <stdio.h>


int main(void)
{
	char str[6] = "HELLO";
	char str_temp[6];
	int length = strlen(str) - 1;
	int i = length;
	int temp_counter = 0;

	//printf("%d", length);

	while(i >= 0)
	{
		str_temp[temp_counter] = str[i];
		i--;
		temp_counter++;
	}
	str_temp[temp_counter] = '\0';

	i = 0;
	while(str_temp[i] != '\0')
	{
		str[i] = str_temp[i];
		i++;
	}

	printf("Reversed String: %s", str_temp);
}
