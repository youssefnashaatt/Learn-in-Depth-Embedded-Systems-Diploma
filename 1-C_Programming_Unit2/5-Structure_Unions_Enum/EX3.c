#include <stdio.h>

typedef struct
{
	float real;
	float imag;
}Complex;

void Sum_Complex(Complex *Num1,Complex *Num2,Complex *Sum)
{
	Sum->real = Num1->real + Num2->real;
	Sum->imag = Num1->imag + Num2->imag;
}

int main(void)
{
	Complex Num1 = {2.3,4.5};
	Complex Num2 = {3.4, 5};
	Complex Sum;

	Sum_Complex(&Num1, &Num2, &Sum);
	printf("Sum of the two complex numbers is --> %.2f + %.2f j", Sum.real, Sum.imag);
}
