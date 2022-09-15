#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: the character to check
  *
  * Return: returns int either 1 or 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 80)
		return (1);
	else
		return (0);
}

