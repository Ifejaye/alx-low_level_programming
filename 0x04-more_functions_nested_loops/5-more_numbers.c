#include "main.h"

/**
  * more_numbers - print 10 times the number from 0 to 14
  *
  * Return: returns void
  */
void more_numbers(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; i <= 14; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
}
