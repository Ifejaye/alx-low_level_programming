#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @r: number to work with
  *
  * Return: returns integer
  */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	} else {
		return (r);
	}
}
