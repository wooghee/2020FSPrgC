#include <stdio.h>

int main(void)
{
	int limitValue = 5;
	int counter = 0;

	while(counter < limitValue)
	{
		counter++;
		printf("# of while loop executions: %d\n", counter);
	}

	return 0;
}	
