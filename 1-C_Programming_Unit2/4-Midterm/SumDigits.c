#include <stdio.h>


unsigned short SumDigits(unsigned short num)
{
	unsigned short new_num = 0;
	int rem = 0;

	while(num != 0)
	{
		rem = num % 10;
		new_num += rem;
		num /= 10;
	}

	return new_num;
}

int main(void)
{
	unsigned short integer_1 = 123;
	unsigned short integer_2 = 4565;

	printf("The Sum of \"123\" digits is: %u", SumDigits(integer_1));
	printf("\nThe Sum of \"4565\" digits is: %u", SumDigits(integer_2));
}
