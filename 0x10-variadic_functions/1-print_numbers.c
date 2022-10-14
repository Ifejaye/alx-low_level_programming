#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers -  a function that prints numbers, followed by a new line
  * @separator:  the string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: returns an integer
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prnt_ptr;
	unsigned int i;
	int next_value;

	va_start(prnt_ptr, n);
	for (i = 0; i < n; i++)
	{
		next_value = va_arg(prnt_ptr, int);
		printf("%d", next_value);
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(prnt_ptr);
	printf("\n");
}
