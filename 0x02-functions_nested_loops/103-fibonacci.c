#include <stdio.h>

/**
  * main - prints the sum of the even-valued terms 
  *        whose values do not exceed 4,000,000
  * 
  * Return: returns zero
  */
int main(void)
{
	long unsigned sum = 2;
	int a = 1;
	int b = 2;

	printf("%d", a);
	while ( sum <= 4000000)
	{
		printf(", %lu", sum);
		sum = a + b;
		a = b;
		b = sum;

	}
	printf("\n");
	return (0);
}
