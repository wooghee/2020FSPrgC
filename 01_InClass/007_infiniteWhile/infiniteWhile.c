#include <stdio.h>

int main(void)
{
	
	int limitValue = 5;
	int counter = 0;
	while(1)
	{
		if( counter > limitValue)
		{
			printf("Limit value reached. Counter: %d, Limit Value: %d\n", counter, limitValue);
			break;
		}
		else
		{ 		
			counter++;
			printf("# of while loop executions: %d\n", counter);
		}
	}

	return 0;
}	
