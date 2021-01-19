#include <stdio.h>


void inverte(unsigned n)
{
	if (n < 10) printf ("%u", n);
	else
	{
		printf ("%u", n%10);
		inverte(n/10);
	}
}

int main() {
	
	unsigned int n;
	printf("\nDigite um numero: ");
	scanf("%u", &n);
	printf("\n%u", inverte(n));
	return 0;
}
