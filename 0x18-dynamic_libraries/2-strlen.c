#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: the string to check
  *
  * Return: returns the length of a string.
  */
int _strlen(char *s)
{
	int lenght;
	lenght = 0;

	while(*s++)
		lenght++;
	return (lenght);
}
