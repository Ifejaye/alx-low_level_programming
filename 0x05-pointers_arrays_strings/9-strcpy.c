#include "main.h"

/**
  * *_strcpy - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: the buffer to print in
  * @src: where to copy ctring from.
  *
  * Return: returns char
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
