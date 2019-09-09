#include <stdio.h>

int power ( int f , int p)
{
	int i , d = 1;
	for (i = 1; i <= p; ++i )
	{
		d = d * f;
	}
	return d;
}


int main (void)
{
	int i, b;
	b = 2;
	for (i = 0; i <= 10; ++i)
	{
		printf("%d\t%d\t%d\n", b, i, power (b , i));
	}
	return 0;
}