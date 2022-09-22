#include "main.h"

/**
  * reverse_array - reverses the content of an array of integer
  * @a: the array to reverse
  * @n: lenght of the rray to reverse
  *
  * Return: returns void
  */
void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i != n - 1)
		{
			_putchar(", ");
		}
		_putchar("%d", a[i]);
		i--;
	}
	_putchar("\n");
}
