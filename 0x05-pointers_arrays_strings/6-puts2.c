#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @s: pointer to string to print
  *
  * Return: returns void
  */
void puts2(char *str)
{
	int i;
	int n;
	n = 0;

	while (*s++)
		n++;
	
	for (i = 0; i < n; i +=2)
		_putchar(*(str++));
	_putchar('\n');
}
