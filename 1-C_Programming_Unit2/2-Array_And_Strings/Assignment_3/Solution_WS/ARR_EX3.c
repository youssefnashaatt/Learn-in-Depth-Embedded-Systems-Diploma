/*
 * ARR_EX3.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */
#include <stdio.h>

int main(void)
{
	int rows, cols, i, j;
	int Matrix[100][100] = {0};

	printf("Enter Rows count: ");
	fflush(stdout);
	scanf("%d", &rows);

	printf("Enter Columns count: ");
	fflush(stdout);
	scanf("%d", &cols);

	printf("\nEnter Matrix elements !\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
			fflush(stdout);
			scanf("%d", &Matrix[i][j]);
		}
	}

	/*Matrix Print*/
	printf("\nMatrix:");
		for(i = 0; i < rows; i++)
		{
			printf("\n");
			for(j = 0; j < cols; j++)
			{
				printf("%d\t", Matrix[i][j]);
			}
		}


	/*Transpose Matrix*/
	printf("\nMatrix Transpose:");
	for(i = 0; i < cols; i++)
	{
		printf("\n");
		for(j = 0; j < rows; j++)
		{
			printf("%d\t", Matrix[j][i]);
		}
	}

}

