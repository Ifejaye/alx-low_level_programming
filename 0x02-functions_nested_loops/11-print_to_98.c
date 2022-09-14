#include "main.h"

/**
  * print_to_98 - prints all natural numbers from n to 98
  *
  * Return: returns void
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;
		for (i = n; i >= 98; i--)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else {
		int i;
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	return;
}
