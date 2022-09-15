#include "main.h"

/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: inputed number
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
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i % 100) / 10) + '0');
			}
			if (i < 100)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	} else {
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i <= -100)
			{
				_putchar((i * -1 / 100) + '0');
				_putchar(((i * -1 % 100) / 10) + '0');
			}
			if ((i <= -10 && i > -100) || i >= 10)
			{
				_putchar((i * -1 / 10) + '0');
				_putchar((i * -1 % 10) + '0');
			}
			if (i > -10 && i < 10)
				_putchar(i * 1 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return;
}
