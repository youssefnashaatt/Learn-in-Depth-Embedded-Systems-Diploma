#include <stdio.h>


int ReverseIntegral(int num)
{
	int new_num = 0;
	int rem;

	while(num != 0)
	{
		rem = num % 10;
		new_num = (new_num * 10) + rem;
		num = num / 10;
	}

	return new_num;
}

int main(void)
{
	int input_1 = 2457;
	int input_2 = 1057;

	printf("The Reverse of integer \"%d\" --> %d", input_1, ReverseIntegral(input_1));
	printf("\nThe Reverse of integer \"%d\" --> %d", input_2, ReverseIntegral(input_2));
}
