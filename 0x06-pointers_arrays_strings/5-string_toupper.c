#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  *
  * Return: return char
  */
char *string_toupper(char *src)
{
	int i;
	
	while (src[i])
	{
		if (src[i] >= 97 && src[i] <= 122)
			src[i] = src[i] - 32;
		else
			src[i] = src[i];
		i++;
	}
	return src;
}

