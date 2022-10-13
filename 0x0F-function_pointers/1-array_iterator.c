#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function given as a parameter
  * @array: the array
  * @size: size of the array
  * @action: the function
  *
  * Return: returns void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;
	void (*act_ptr)(int) = action;

	i = 0;
	while (i < size)
	{
		act_ptr(array[i]);
		i++;
	}
}
