#include "main.h"

/**
  * puts2 - prints a string
  * @*str: pointer to the string
  *
  * Return: returns void
  */
void puts2(char *str)
{
	int i;

	while (*(str + 1))
	{
		if ( i % 2 == 0)
			_putchar(*(str + 1));
		i++;
	}
	_putchar('\n');
}
