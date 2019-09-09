#include <stdio.h>
#define NO 0
#define YES 1

int main (void)
{
	int c, in_word, in_tab;
	in_word = in_tab = 0;
	while ((c = getchar ()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (in_tab == NO)
				{
					in_word = NO;
					in_tab = YES;
				}
		}
		else if (in_word == NO)
			{
				in_word = YES;
				in_tab = NO;
				putchar('\n');
				putchar('-');
			}
			else
			{
				putchar('-');
			}
	}
	return 0;
}