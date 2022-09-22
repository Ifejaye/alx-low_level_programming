#include "main.h"

/**
  * _strncpy - works exactly like strncpy
  * @dest: receiving buffer
  * @src: where to copy from
  * @n: the maximum byte
  *
  * Return: returns a char.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
