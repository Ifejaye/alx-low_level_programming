#include <stdio.h>
/**
 * main - prints combinations of numbers between 0 and 9
 *
 * Return: returns the value zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 || j < 9)
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
