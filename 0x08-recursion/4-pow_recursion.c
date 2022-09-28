#include :main.h"

/**
  * _pow_recursion -  a function that returns the value of x raised to the power of y
  * @x: the number to rase to a power
  * @y: the power to raise the number to.
  *
  * Return: returns the value of x raised to the power of y, return -1 If y is lower than 0
  */
int _pow_recursion(int x, int y)
{
	int z = x;

	if (y < 0)
		return (-1);
	if (y > 0)
	{
		y--;
		z *= x;
		_pow_recursion (x);
	}
	if (y == 0)
		return (z);
