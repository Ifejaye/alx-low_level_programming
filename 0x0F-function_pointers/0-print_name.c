#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name -  a function that prints a name
  * @name: name to print
  * @f: the function to call
  *
  * Return: returns void
  */
void print_name(char *name, void (*f)(char *))
{
	void (*print_ptr)(char *) = f;

	print_ptr(name);
}
