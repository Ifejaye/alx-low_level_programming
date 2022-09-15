#include "main.h"

/**
  * print_diagonal - draws a diagonal line on terminal
  * @size: size of the triangle
  *
  * Return: returns void
  */
void print_triangle(int size)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = n - 1; j >= 1; j--)
			_putchar(' ');
		_putchar('#');
		_putchar('\n');
	}
}
