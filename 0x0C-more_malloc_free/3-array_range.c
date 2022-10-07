#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range -  a function that creates an array of integers.
  * @min: the minmum value in the array
  * @max: the maximum value in the array
  *
  * Return: returns a pointer
  */
int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return NULL;
	size = max - min + 1;
	new_array = malloc(size * sizeof(int));
	if (new_array == NULL)
		return NULL;
	for(i = 0; i < size; i++)
		new_array[i] = (min + i);
	return (new_array);
}
