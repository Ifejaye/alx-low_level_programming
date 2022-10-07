#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked -  a function that allocates memory using malloc
  * @b: the input
  *
  * Return: returns a pointer
  */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(b));
	if(s == NULL)
		exit(98);
	return (s);
}
