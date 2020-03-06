#include <stdio.h>



/* Function:  cubic
 * Inputs:	a whole number of type long
 * Output:	a whole number of type long
 *          that is the input number to the third power
 */
long cubic(long x){
	long xCubed;
	xCubed = x * x * x;
	return xCubed;
}


