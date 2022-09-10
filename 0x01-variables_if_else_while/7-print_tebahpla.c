#include <stdio.h>


int main()
{
	char alphabet;
	for (alphabet='z'; alphabet>='a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return(0);
}
