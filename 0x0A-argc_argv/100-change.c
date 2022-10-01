#include <stdio.h>
#include <stdlib.h>

/**
  * main -  a program that prints the minimum number of coins to make change for an amount of money.
  * @argc: number of command line arguments.
  * @argv: array that contains the program command line arguments.
  *
  * Return: returns 0 or 1
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int x = atoi(argv[1]);
	int res = 0;

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res += x / 25;
	res += (x % 25) / 10;
	res += ((x % 25) % 10) / 5;
	res += (((x % 25) % 10) % 5) / 2;
	res += ((((x % 25) % 10) % 5) % 2) / 1;
	printf("%d\n", res);
	return (0);
}
