#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * realloc -  a function that reallocates a memory block using malloc and free
  * @ptr: a pointer to the memory previously allocated
  * @old_size:  size, in bytes, of the allocated space for ptr
  * @new_size: the new size, in bytes of the new memory block
  *
  * Return: returns a pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *s, *t;
	unsigned int i;

	t = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	s = malloc(new_size * sizeof(int));
	if (s == NULL)
		return NULL;
	if (new_size < old_size)
	{
		for(i = 0; i < old_size; i++)
			s[i] = t[i];
	}
	free(ptr);
	return(s);
}
