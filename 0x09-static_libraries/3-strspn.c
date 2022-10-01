#include "main.h"

/**
  * strspn - gets the length of a prefix substring
  * @s:  the initial segment
  * @accept: the string to search through
  *
  * Return: Returns the number of bytes in the initial segment of s which consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if *(s + i) = *(accept + k)
				k++;
			j++;
		}
		i++
	}
	return (k)
}
