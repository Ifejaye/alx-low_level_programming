#include "main.h"

/** 
  * check_prime - checks if a number if a prime number
  * @n: the number
  * @x: the divisor
  *
  * Return: 1 or 0
  */
int check_prime(int n, int x)
{
	if ( n == 0 || n == 1)
		return (0);
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(n, x + 1));
}

/**
  * is_prime_number - a function that returns 1 if the input integer is a prime number, otherwise return 0.
  * @n: the number to check
  *
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (check_prime(n, 2));
}
