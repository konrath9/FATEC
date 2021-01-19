/*at25.c*/

#include <stdio.h>

int fatorial(int n) {
	int i, fat;
	fat = 1;
	for(i = n; i>0; i--)
		fat = fat*i;
	return fat;
}


int main() {

	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("\nFatorial de %d = %d", x, fatorial(x));
	
	return 0;
}
