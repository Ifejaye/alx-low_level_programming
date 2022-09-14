#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  *
  * Return: returns integer
  */
int _abs(int)
{
	int r;
	if (r < 0)
	{
		_putchar(-r + '0');
	} else {
		_putchar(r + '0');
	}
	return (0);
}
