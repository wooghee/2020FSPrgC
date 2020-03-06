#include <stdio.h>

int main(void)
{
	int x, y = 200; 
	x = y ? 1 : 100;

	printf("y: %d, x: %d\n", y, x);

	y = -1;
	x = y ? 1 : 100;
	printf("y: %d, x: %d\n", y, x);

	y = 0;
	x = y ? 1 : 100;
	printf("y: %d, x: %d\n", y, x);

	printf("done.\n");
	return 0;
}
