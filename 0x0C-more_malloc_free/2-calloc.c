#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * calloc - a function that allocates memory for an array, using malloc
  * @nmemb: the number of element
  * @size: the size of the elements each
  *
  * Return: returns a pounter
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *s;
	int i;

	if(nmemb == 0 || size == 0)
		return NULL;
	s = malloc(nmemb * size);
	if (s == NULL)
		return NULL;
	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}

