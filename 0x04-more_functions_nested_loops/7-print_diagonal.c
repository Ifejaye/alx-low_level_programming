#include "main.h"

/**
  * print_diagonal - draws a diagonal line on terminal
  * @n: size of the diagonal
  *
  * Return: returns void
  */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < (i - 1); j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
