/*
 * ARR_EX1.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Youssef
 */

#include <stdio.h>

int main(void)
{
	float Matrix1[2][2] = {0};
	float Matrix2[2][2] = {0};
	float SUM[2][2] = {0};
	int i, j;


	/**************************************First Matrix****************************************/
	printf("Please enter the numbers of first matrix:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter a%d%d:", i + 1, j + 1);
			fflush(stdout);
			scanf("%f", &Matrix1[i][j]);
		}
	}


	/**************************************Second Matrix****************************************/
	printf("\nPlease enter the numbers of second matrix:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter b%d%d:", i + 1, j + 1);
			fflush(stdout);
			scanf("%f", &Matrix2[i][j]);
		}
	}


	/************************************Add Matrices******************************************/
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			SUM[i][j] = Matrix1[i][j] + Matrix2[i][j];
		}
	}


	/*************************************Print Sum*********************************************/
	printf("Summation of matrices is:");
	for(i = 0; i < 2; i++)
	{
		printf("\n");
		for(j = 0; j < 2; j++)
		{
			printf("%f\t", SUM[i][j]);
		}
	}
}
