#include <stdio.h>
#define NO 0
#define YES 1
#define MW 20



int main (void)
{
	int c, lword[MW], i, d, in_word, t;
	for( i = 0 ; i < MW ; ++i) 
	{
		lword[i] = 0;
	}
	
	while ((c = getchar()) != EOF)
	{
		in_word = YES;
		if ( c == ' ' && c == '\n' && c == '\t' && c == ',')
		{
			in_word = NO;	
		}
		else if ( in_word == NO)
			{
				in_word = YES;
			}
		if (in_word == YES)
		{
			++d;	
		}
		if ( in_word == NO && d != 0 && d < MW)
		{
			++lword[d];
			d = 0;
		}
	}
	for ( i = 1 ; i <= MW ; ++i )	
	{
		printf ("%d\t", i);
		for ( t = 0 ; t < lword[i] ; ++t )
		{
			printf("-");
		}
		printf("\n");
	}

	return 0;
}