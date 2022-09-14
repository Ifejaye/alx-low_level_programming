#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  *
  * Return: returns void
  */

void print_alphabet_x10(void)
{
	for (i = 0; i < 10; i++)
	{
		char j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar(j);
	}
}
