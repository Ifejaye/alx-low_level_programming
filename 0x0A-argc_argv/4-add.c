#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - adds positive numbers
  * @argc: number of command line arguments.
  * @argv: array that contains the program command line arguments.
  *
  * Return: returns 1 or 0.
  */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	for(i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if(!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

