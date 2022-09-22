#include "main.h"

/**
  * _strcat.c -  appends the two strings
  * @dest: copy to.
  * @src: copy from.
  * @n: maximum size from src
  *
  * Return: Returns a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
