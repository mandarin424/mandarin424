#include <stdio.h>
#include <math.h>


int main(void)
{
	float y, y2, y1, x, x1, x2;
	y = 0;
	y2 = 7;
	y1 = -6;
	x2 = 5;
	
	x1 = -6;
	for (x = -6; x <= 35; ++x)
	{
    if (x < 5)
    {
    	y = (sqrt(pow((((x2 - x1) - (x2 - x)) / ((x2 - x1) / sqrt(pow((x2 - x1), 2)
                    + pow((y2 - y1), 2)))), 2) - pow(((x2 - x1) - (x2 - x)), 2)) + y1);
		printf ("A\tX\t%0.2f\t Y\t%0.2f\t\n", x, y);
    }
    else if ( x >= 5)
    {
    	x1 = 5;
    	x2 = 9;
    	y1 = 7;
    	y2 = -5;
    	y = (sqrt(pow((((x2 - x1) - (x2 - x)) / ((x2 - x1) / sqrt(pow((x2 - x1), 2)
                    + pow((y2 - y1), 2)))), 2) - pow(((x2 - x1) - (x2 - x)), 2)) + y1);
    	printf ("B\tX\t%0.2f\t Y\t%0.2f\t\n", x, y);
	}



	}
	return 0;
}



