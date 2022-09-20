#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @*a: pointer for first integer
  * @*b: pointer for second integer
  *
  * Return: returns void
  */
void swap_int(int *a, int *b)
{
	int *c;
	*c = *a;
	*a = *b;
	*b =*c;
}
