/*At34.C*/
#include <stdio.h> 

int main() {

	int x, y, tam;
	char nome[30];

	printf("Digite uma palavra: ");
	gets(nome);
	tam = strlen(nome);
	printf("\n A palavra de tras pra frente eh: ");

	for (x = tam - 1; x >= 0; x--) {
		printf("%c", nome[x]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
