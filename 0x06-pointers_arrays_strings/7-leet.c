#include "main.h"

/**
  * leet -  encodes a string into 1337
  * @s: string to encode
  *
  * REturn: returns char
  */
char *leet(char *s)
{
	int i, j;
	char keys[5] = {'a', 'e', 'o', 't', 'l'};

	while (s[i])
	{
		for (j = 0; j <= 4; j++)
		{
			if (s[i] == keys[j] || str[i] + 32 == keys[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}

