#include "main.h"
#include <stdio.h>


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

	while (*(s + n))
		n++;
	
	for (i = n; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');	
}
