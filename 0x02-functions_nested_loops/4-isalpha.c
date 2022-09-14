#include "main.h"

/**
  * _isalpha - checks for alphabet
  * @c: number to check
  *
  * Return: returns either 1 or 0
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	} else 
	{
		return (0);
	}
}
