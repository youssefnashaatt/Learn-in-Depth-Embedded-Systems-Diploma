#include <stdio.h>

#define TRUE 1
#define FALSE 0

int ArrayUnique(int *arr, int size)
{
	int i,j;
	char Unique_Flag = TRUE;

	for(i = 0; i < size - 1; i++)
	{
		Unique_Flag = TRUE;
		for(j = 0; j < size; j++)
		{
			if(i == j)
				continue;

			if(arr[i] == arr[j])
			{
				Unique_Flag = FALSE;
			}
		}

		if(Unique_Flag)
		{
			return arr[i];
		}


	}

	return -1;

}

int main(void)
{
	int arr1[7] = {4,2,5,2,5,7,4};
	int arr2[3] = {4,2,4};

	printf("Unique Item of Array 1 is --> %d", ArrayUnique(arr1, 7));
	printf("\nUnique Item of Array 1 is --> %d", ArrayUnique(arr2, 3));
}
