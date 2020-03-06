#include <stdio.h>

int main(void)
{
	int x = 0,  y = 0, z = 0, maxValue= 0, minValue = 0;

	printf("Enter 3 positive integer values separated by space: ");
	scanf("%d %d %d", &x, &y, &z);

	if( x < 0 || y < 0 || z < 0 ) {
		printf("The entered values are not all positive. Exiting.\n");
	}
	else
	{	
		minValue = x;
		if( minValue > y )
			minValue = y;

		if( minValue > z )
			minValue = z;

		printf("The smallest of the entered values is: %d\n", minValue);

		maxValue = x;
		if( maxValue < y ) 
			maxValue = y;

		if( maxValue < z )
			maxValue = z;

		printf("The largest of the entered values is: %d\n", maxValue);
		
	}
	return 0;
}
