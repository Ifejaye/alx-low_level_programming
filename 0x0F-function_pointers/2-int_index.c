#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - searches for an intege
  * @array: the array to search through
  * @size: size of th array
  * @cmp: the compare function
  *
  * Return: returms an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;
	int (*cmp_ptr)(int) = cmp;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		index = cmp_ptr(array[i]);
		if (index != 0)
			return (i);
		i++;
	}
	return (-1);
}
