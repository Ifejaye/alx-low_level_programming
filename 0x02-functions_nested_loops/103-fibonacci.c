#include <stdio.h>

/**
  * main - prints the sum of the even-valued terms
  *
  * Return: returns zero
  */
int main(void)
{
	unsigned long output, sum, a = 1, b = 2;

	while (output <= 4000000)
	{
		sum = a + b;
		if ((sum % 2) == 0)
			output += sum;
		a = b;
		b = sum;
	}
	printf("%lu\n", output + 2);
	return (0);
}
