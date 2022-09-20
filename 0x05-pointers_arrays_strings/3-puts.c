#include "main.h"

/**
  * _puts - prints a string
  * @*str: pointer to the string
  *
  * Return: returns void
  */
void _puts(char *str)
{
	int i;

	while (*(str + 1))
	{
		_putchar(*(str + 1));
		i++;
	}
	_putchar('\n');
}
