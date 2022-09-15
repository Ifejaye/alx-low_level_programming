#include "main.h"
/**
  * times_table - prints the 9 times table, starting with 0
  *
  * Return: returns void
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int prod;

			prod = i * j;
			if (prod >= 10)
				_putchar((prod / 10) + '0');
			else
			{
				if (j != 0)
					_putchar(' ');
			}
			_putchar((prod % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
