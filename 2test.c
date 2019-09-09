#include <stdio.h>
#include <math.h>


int main(void)
{
	float y, y2, y1, x, x1, x2;
	y = 0;
    x1 = 9;
    x2 = -6;
    y1 = -5;
    y2 = -6;
    x = 2 ;
    y = (sqrt(pow((((x2 - x1) - (x2 - x)) / ((x2 - x1) / sqrt(pow((x2 - x1), 2)
         + pow((y2 - y1), 2)))), 2) - pow(((x2 - x1) - (x2 - x)), 2)) - y1);
    printf ("B\tX\t%0.2f\t Y\t%0.2f\t\n", x, y);
	return 0;
}