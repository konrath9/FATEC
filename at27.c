#include <stdio.h>


unsigned int prod(unsigned int a, unsigned int b) {
	
 	if (b==0) return 0;
 	if (b==1) return a;
	return (a + prod(a, b-1));
}


int main() {
	int a;
	int b;
	printf("\nDigite a e b: ");
	scanf("%u %u", &a, &b);
	printf("\n%u * %u = %u", a, b, prod(a, b));
	return 0;
}
