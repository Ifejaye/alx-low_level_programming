#include "main.h"

/**
  * _isdigit - checks if c is digit
  * c: character to check if digit
  *
  * Return: returns 1 for digit and 0 otherwise
  */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
