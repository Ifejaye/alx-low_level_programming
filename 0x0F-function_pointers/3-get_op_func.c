#include <stdio.h>
#include "3-calc.h"

/**
  * get_op_fun - selects the correct function to perform the operation
  * @s: the operator
  *
  * Return: returns an integer
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	

	if (s == op_t ops[i][0])
		return (*ops_ptr


