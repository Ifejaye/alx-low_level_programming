#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings -  a function that prints numbers, followed by a new line
  * @separator:  the string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: returns an integer
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prnt_ptr;
	unsigned int i;
	char *next_string;

	va_start(prnt_ptr, n);
	for (i = 0; i < n; i++)
	{
		next_string = va_arg(prnt_ptr, char *);
		if (next_string == NULL)
			printf("(nil)");
		else
			printf("%s", next_string);
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(prnt_ptr);
	printf("\n");
}
