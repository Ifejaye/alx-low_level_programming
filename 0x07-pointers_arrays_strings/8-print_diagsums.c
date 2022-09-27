#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
  * @a: the matrix
  * @size: the matrix size
  *
  * Return: returns void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[(size + 1) * i];
		d += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", c, d);
}
