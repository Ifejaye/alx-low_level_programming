#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * binary_to_uint -  converts a binary number to an unsigned int
  * @b: string of characters
  *
  * Return: returns decimal
  */
void main(void)
{
	unsigned int value = 0;
	int i = 0;
	
	b = "101";



	while (b[i] != '\0')
		i++;

	while (i >= 0)
	{
		if (b[i] == 48 || b[i] == 49)
		{
			printf("%c", b[i]);
			value += b[i] * i;
		}
		else
		i--;
	}
}
