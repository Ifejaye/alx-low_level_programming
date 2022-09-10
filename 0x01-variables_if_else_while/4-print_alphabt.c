#include <stdio.h>

/**
 *main - prints the alphabet in lowercase except q and e
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
