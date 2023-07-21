/*
 * ARR_EX5.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	int n, counter;
	int numbers[100] = {0};
	int search;

	printf("Enter No. of elements: ");
	fflush(stdout);
	scanf("%d", &n);

	/*Take inputs from user*/
	for(counter = 0; counter < n; counter++)
	{
		printf("%d. Enter number: ", counter + 1);
		fflush(stdout);
		scanf("%d", &numbers[counter]);
	}

	printf("\n");
	for(counter = 0; counter < n; counter++)
	{
		printf("%d ", numbers[counter]);
	}
	printf("\n\n");


	printf("Enter No. to search for: ");
	fflush(stdout);
	scanf("%d", &search);

	counter = 0;
	while(counter < n)
	{
		if(numbers[counter] != search)
		{
			counter++;
		}

		else
		{
			break;
		}
	}

	if(counter == n)
		printf("No. is not found !");

	else
		printf("No. is found at location: %d", counter);

}

