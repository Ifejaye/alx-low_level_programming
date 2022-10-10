#include <stdio.h>
#include "dog.h"

/**
  * print_dog - a function that prints a struct dog
  * @d: the struct
  *
  *Return: returns void
  */
void print_dog(struct dog *d)
{
	char *obj_name, *obj_owner;

	if (d != NULL)
	{
		if((*d).name != NULL)
			obj_name = d->name;
		else
			obj_name = "(nil)";
		if((*d).owner != NULL)
			obj_owner = d->owner;
		else
			obj_owner = "(nil)";
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", obj_name, d->age, obj_owner);
	}
}
