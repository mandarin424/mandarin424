#include <stdio.h>

int main (void)
{
	int c;
	while ( (c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t') 
		{
			;
		}
		else printf("%c\n", c);
	}
	return 0;
}