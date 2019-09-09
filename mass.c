#include <stdio.h>

int main (void)
{
	int mass[10], i, c;
	for (i = 0 ; i < 10 ; ++i)
	{
		mass[i] = 0;
	}

	/*for (i = 0 ; i < 10 ; ++i)
	{
		++mass[i];
	}*/
	 for ((c = getchar()) != EOF)
	 { 
	   ++mass[c - '0'];
	}	
		printf("\n");
	for (i = 0 ; i < 10 ; ++i)
		printf("%d\n", mass[i]);

	return 0;
}