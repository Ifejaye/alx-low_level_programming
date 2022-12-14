#include <stdio.h>

/**
  * main -  prints the first 50 Fibonacci numbers
  *
  * Return: returns zero
  */
int main(void)
{
	int i;
	unsigned long sum, a = 1, b = 2;

	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i < 47)
			printf(", ");
		a = b;
		b = sum;

	}
	printf("\n");
	return (0);
}
