#include <stdio.h>

int main (void)
{
	int C;
	while ( (C = getchar()) != EOF)
	{
		putchar(C);
	}
	return 0;
}