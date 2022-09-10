#include <stdio.h>


int main()
{
	char alph;
	char abet;

	for (alph='a'; alph<='z'; alph++)
	{
		putchar(alph);
	}
	for (abet='A'; abet<='Z'; abet++)
	{
		putchar(abet);
	}
	putchar('\n');
	return(0);
}
