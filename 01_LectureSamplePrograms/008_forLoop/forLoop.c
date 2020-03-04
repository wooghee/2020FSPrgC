#include <stdio.h>

int main(void)
{
	// in for-loops, it's normal to declare the looping variable
	// right with the for loop

	printf("incrementing loop:\n");
	for(int i = 0; i <= 5; i++)		
	{
		printf("loop variable i: %d\n", i);
	}

	printf("\ndecrementing loop:\n");

	for(int j = 6; j >=2; j--)
	{
		printf("loop variable j: %d\n", j);
	}
	printf("done\n");	
	return 0;
}
