#include <stdio.h>

int main(void){


	// 1:
	short largeShort = 32760;
	largeShort = largeShort + 12345;
	printf("largeShort: %d\n", largeShort);

	// 2:
	int numerator = 19, denominator = 5, result;
	result = numerator/denominator;
	printf("result: %d\n", result);

	// 3:
	float e = 2.718281828f;
	e++;
	printf("e: %f\n", e);
	e--;
	printf("e: %f\n", e);

	//4:
	double dblNumerator = 12.8;
	// the following won't compile!
	// -> % only defined for integers 
	// --> us fmod from <math.h> to compute "modulus" of floats & doubles
	//	printf("%f\n", dblNumerator % 3);

	return 0;
}
