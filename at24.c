/*at24.c*/

#include <stdio.h>

void rodizio(int placa) {
	 
	if (placa<0 || placa >9999) 
		printf("Placa invalida");
	else
		switch(placa % 10) {
		
			case 1:
			case 2: printf("%s", "Segunda-feira"); break;
			case 3:
			case 4: printf("%s", "Terca-feira"); break;
			case 5:
			case 6: printf("%s", "Quarta-feira"); break;
			case 7:
			case 8: printf("%s", "Quinta-feira"); break;
			default: printf("%s", "Sexta-feira");
		}
}
	
int main () {
	int placa;
	printf("Digite os numeros da placa: ");
	scanf("%d", &placa);
	printf("\nO rodizio eh : ");
	rodizio(placa);

	return 0;
}
