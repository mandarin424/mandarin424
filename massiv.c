#include <stdio.h>


int main (void)
{
	int digit[10], i, c, white, other;
	white =	other = 0;
	for  (i = 0 ; i < 10 ; ++i)
	{
		digit[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			++digit[c - '0'];
		}
		else if (c == ' ' || c == '\t' || c == '\n')
		{
			++white;
		}
		else 
			++other;
	}
	   printf("digits");
	for ( i = 0 ; i < 10 ; ++i)
	{
		printf("\n%d", digit[i]);
	}
	
		printf("\nWhite space = %d\nOther = %d\n", white, other);
	return 0;
}