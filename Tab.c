#include <stdio.h>

int main (void)
{
	int c, tab = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (tab == 0)
			{
			putchar (c);
				tab = 1;
			}

		}
		else 
		{
			putchar (c);
			tab = 0;
		}

	}
	return 0;
}