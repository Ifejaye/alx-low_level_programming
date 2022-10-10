#include "dog.h"

/**
  * free_dog - a function that frees dogs
  * @d: tne struct
  *
  * Return: returns void
  */
void free_dog(dog_t *d)
{
	if(d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

