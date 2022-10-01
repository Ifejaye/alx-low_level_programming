#include "main.h"

/**
  * _strcat.c -  appends the two strings
  * @dest: copy to.
  * @src: copy from.
  *
  * Return: Returns a pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (*(dest + i) != '\0')
		i++;
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
