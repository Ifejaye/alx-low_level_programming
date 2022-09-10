#include <stdio.h>


int main()
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
