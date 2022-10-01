#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints its own name even if renamed
  * @argc: number of command line arguments
  * @argc: number of command line arguments
  *
  * Return: retturns zero
  */
int main(int argc, char **argv)
{
	int i = 0;

	if (i < argc)
		printf("%s\n", *argv);
	return (0);
}
