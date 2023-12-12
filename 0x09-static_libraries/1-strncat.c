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
	int i = 0, j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
