/*
 * ARR_EX4.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int n, counter;
	int numbers[100] = {0};
	int inserted, location;

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

	printf("Enter No. to be inserted: ");
	fflush(stdout);
	scanf("%d", &inserted);

	printf("Enter location: ");
	fflush(stdout);
	scanf("%d", &location);

	counter = n;
	while(counter > 0)
	{
		if(counter > location)
		{
			numbers[counter + 1] = numbers[counter];
			counter--;
		}

		else if(counter == location)
		{
			numbers[counter + 1] = numbers[counter];
			numbers[counter] = inserted;
			counter--;
		}

		else
		{
			break;
		}
	}

	printf("\n");
	for(counter = 0; counter < n + 1; counter++)
	{
		printf("%d ", numbers[counter]);
	}
	printf("\n");
}

