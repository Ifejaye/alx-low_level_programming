#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - sums a and b
  * @a: first number
  * @b: second number
  *
  * Return: returns an int
  */
int op_add(int a, int b)
{
	return (a + b);
}


/**
  * op_sub - subtract a and b
  * @a: first number
  * @b: second number
  *
  * Return: returns an int
  */
int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

/**
  * op_mul - multiplies a and b
  * @a: first number
  * @b: second number
  *
  * Return: returns an int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a by b
  * @a: first number
  * @b: second number
  *
  * Return: returns an int
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - reminder of a divided by b
  * @a: first number
  * @b: second number
  *
  * Return: returns an int
  */
int op_mod(int a, int b)
{
	return (a % b);
}
