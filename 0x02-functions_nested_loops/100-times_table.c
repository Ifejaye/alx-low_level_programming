#include "main.h"
/**
  * print_times_table - prints the n times table
  * @n: the number of rows
  *
  * Return: returne void
  */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int prod;

				prod = i * j;
				if (prod >= 100)
					_putchar((prod / 100) + '0');
				else
				{
					if (j != 0)
						_putchar(' ');
				}
				if (prod >= 10)
				{
					_putchar((prod / 10) + '0');
				} else
				{
					if (j != 0)
						_putchar(' ');
				}
				_putchar((prod % 10) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
