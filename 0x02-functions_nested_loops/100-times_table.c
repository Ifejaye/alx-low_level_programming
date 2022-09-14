#include "main.h"
/**
  * print_times_table - prints the n times table
  *
  * Return: returne void
  */
void print_times_table(int n)
{
	int i, j;
	if (n <= 15 && n >= 0)
	{
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				int prod;
				prod = j * j;
				if (prod >100)
					{
					_putchar((prod / 100) + '0');
				} else {
					_putchar(' ');
				}
				if (prod >= 10)
				{
					_putchar((prod / 10) + '0');
				} else {
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
}
