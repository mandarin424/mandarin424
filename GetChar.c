#include <stdio.h>

int main (void)
{
	int C;
	
	C = getchar();
	while (C != EOF)
	{
		putchar(C);
		C = getchar();
	}
	return 0;
}