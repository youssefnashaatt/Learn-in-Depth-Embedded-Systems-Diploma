/*
 * ARR_EX2.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	int n, counter;
	float numbers[100] = {0};
	float average = 0;

	printf("Enter No. of elements: ");
	fflush(stdout);
	scanf("%d", &n);

	/*Take inputs from user*/
	for(counter = 0; counter < n; counter++)
	{
		printf("%d. Enter number: ", counter + 1);
		fflush(stdout);
		scanf("%f", &numbers[counter]);
	}

	/*Average calc*/
	for(counter = 0; counter < n; counter++)
	{
		average = average + numbers[counter];
	}

	printf("Average = %f", average / n);

}
