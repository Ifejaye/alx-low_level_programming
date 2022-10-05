#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** str_concat - concatenates two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: returns a pointer or null
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0,str_len = 0;
	int str_len1, str_len2;
	char *str_ptr;

	while(*s1++)
		str_len1++;
	while(*s2++)
		str_len2++;
	str_len = str_len1 + str_len2;
	str_ptr = malloc(sizeof(char) * str_len);
	if (str_ptr == NULL)
		return (NULL);
	for(i = 0; i < str_len1; i++)
		str_ptr[i] = str_ptr[i];
	while ( j >= str_len1 && j < str_len)
	{
		str_ptr[j] = s2[j - str_len1];
		j++;
	}
	str_ptr[j] = '\0';
	return (str_ptr);
}
