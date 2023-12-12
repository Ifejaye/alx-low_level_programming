#include "main.h"

/**
  * rev_string - reverse a string
  * @s: string pointer
  *
  * Return: returns nothing
  */
void rev_string(char *s)
{
	int i = 0, j;

	while (*(s + i))
		i++;
	for (j = i; j >= 0; j--)
		_putchar(*(s + j));
}
