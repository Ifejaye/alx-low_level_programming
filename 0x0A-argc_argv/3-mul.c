#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: number of command line arguments.
  * @argv: array that contains the program command line arguments.
  *
  * Return: returns 0 for success ans 1 for error
  */
int main(int argc, char *argv[])
{
	int x, y, prod;

	if(argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		prod = x * y;
		printf("%d\n", prod);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}

