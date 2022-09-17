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

	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = size - i; j >= 1; j--)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
