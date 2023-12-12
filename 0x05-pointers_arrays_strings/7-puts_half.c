#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @s: pointer to string to print
  *
  * Return: returns void
  */
void puts_half(char *str)
{
	int i;
	int n, len;
	n = 0;

	
	while (*(str + n))
		n++;
	if (n % 2 == 0)
		len = n / 2;
	else
		len = (n - 1) / 2;
	
	for (i = len; i <= n; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
