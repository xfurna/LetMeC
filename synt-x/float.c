#include <stdio.h>

int main(){
	const float l = 3.4e-38;
	float m = 3.4E+38; //no issue with case of 'e'

	// 3.4e38 or 34.00e37 will also do
	
	// by the way, they both represent floating point constants
	
	printf("Lower limit of the range of float datatype is %.39f and maximum is %f\n", l, m);
	
	return 0;
}
