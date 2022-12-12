#include "main.h"

/**
  * _puts - prints a string
  * @str: pointer to the string
  *
  * Return: returns void
  */
void _puts(char *str)
{
	int i;

	while (*(str ++))
	{
		_putchar(*(str ++));
		i++;
	}
	_putchar('\n');
}
