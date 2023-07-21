#include <stdio.h>

#define SIZE 5

void ReverseArray(int *arr, int size)
{
	int counter;

	for(counter= size - 1; counter >= 0; counter--)
	{
		printf("%d ", arr[counter]);
	}
}

int main(void)
{
	int a[SIZE] = {1,2,3,4,5};
	printf("Reverse of Array {1, 2, 3, 4, 5} is --> ");
	ReverseArray(a, SIZE);
}
