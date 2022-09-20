#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @*s: pointer to string to print
  *
  * Return: returns void
  */
void print_rev(char *s)
{
	int i;
	int n;

	n = sizeof(*s);

	for (i = n; i <= 0; i--)
		_putchar(*(str + 1));
	_putchar('\n');
}
