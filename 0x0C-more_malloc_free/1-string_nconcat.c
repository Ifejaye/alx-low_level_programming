#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat -  a function that concatenates two strings.
  * @s1: the first string
  * @s2: the second string
  * @n: the size to copy from s2
  *
  * Return: returns a string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, k, len2;

	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	s3 = malloc(sizeof(s1) + (n * sizeof(char)) + 1);
	if (s3 == NULL)
		return NULL;
	for(i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	len2 = 0;
	while(s2[len2] != '\0')
		len2++;
	if(n >= len2)
		k = len2;
	else
		k = n;
	for(j = 0; j < k; j++)
		s3[i+j] = s2[j];
	return (s3);
}
