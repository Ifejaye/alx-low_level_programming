#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - a function that creates a new dog
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Return: returns dog_t
  */
dog_t *new_dog(char *name, float age __attribute__((unused)), char *owner)
{
	dog_t *save_dog;

	save_dog = malloc(sizeof(char) * (sizeof(name) + sizeof(owner)));
	if (save_dog == NULL)
		return (NULL);
	save_dog->name = name;
	save_dog->owner = owner;
	return (save_dog);
}
