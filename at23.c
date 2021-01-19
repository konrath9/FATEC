/*at23.c*/

#include <stdio.h>

double max(double a, double b) {
	if ( a>b ) 
		return a;
	return b;
	}
	
int main () {
	double x, y, maior;	
	x = 10.2;
	y = 20.32;
	
	maior = max(x, y);
	printf("O maior valor e: %.2lf", maior);

	return 0;
}
