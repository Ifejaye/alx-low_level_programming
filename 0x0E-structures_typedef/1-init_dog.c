#include "dog.h"
#include <stddef.h>

/**
  * init_dog - initialize dog
  * @d: pointer for dog
  * @name: name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: returns void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

