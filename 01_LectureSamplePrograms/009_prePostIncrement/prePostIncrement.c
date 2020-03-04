#include <stdio.h>

int main(void)
{
	int preIncremented = 0, postIncremented = 0;

	printf("Pre-Incremented: %d\n", ++preIncremented);
	
	printf("Post-Incremented: %d\n", postIncremented++);

	printf("Post-Incremented next line: %d\n", postIncremented);	

	printf("done.\n");
	return 0;
}
