#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples of 3 or 5 
  *        below 1024 (excluded), followed by a new line
  * 
  * Return: returns zero
  */
int main(void)
{
	int i;
	int output = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			output = output + i;
	}
	printf("%d\n", output);
	return (0);
}
