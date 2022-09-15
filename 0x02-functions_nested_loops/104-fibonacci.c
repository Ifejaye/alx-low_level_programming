#include <stdio.h>

/**
  * main -  prints the first 100 Fibonacci numbers, starting 
  *         with 1 and 2, followed by a new line.
  * 
  * Return: returns zero
  */
int main(void)
{
	int i;
	long unsigned sum;
	int a = 1;
	int b = 2;

	printf("%d, %d, ", a ,b);	
	for (i = 0; i < 96; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i < 95)
			printf(", ");
		a = b;
		b = sum;

	}
	printf("\n");
	return (0);
}
