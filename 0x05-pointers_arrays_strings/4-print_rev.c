#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @s: pointer to string to print
  *
  * Return: returns void
  */
void print_rev(char *s)
{
	int i;
	int n;
	n = 0;

	while (*s++)
		n++;
	
	for (i = n - 1; i <= 0; i--)
		_putchar(*(str--));
	_putchar('\n');
}
