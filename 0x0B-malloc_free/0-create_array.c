#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array -  a function that creates an array of chars, and initializes it with a specific char
  * @size: size of the array
  * @c: the char for initialization
  *
  * Return: returns char.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if(size == 0)
		return (NULL);
	str = malloc(size*sizeof(char));
	if (str == NULL)
		return (NULL);
	for(i= 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

