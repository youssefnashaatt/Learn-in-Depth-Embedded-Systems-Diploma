#include <stdio.h>


void ReverseString(char *str, int length);

int main(void)
{
	char str[20] = "YOUSSEF";
	int length = (int)strlen(str);
	printf("Original String: %s", str);
	printf("\nReversed String:");
	ReverseString(str, length);
}


void ReverseString(char *str, int length)
{
	if(length > 0)
	{
		ReverseString((char *)(str + 1), length - 1);
	}

	printf("%c", str[0]);
}
