/*At40.C*/
#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} DATA;

typedef struct {
	char nome[31];
	char fone[21];
	DATA nasc;
} PESSOA;

int main(){

    PESSOA agenda[5];
	int i;
	
	for (i=0; i<5; i++) {
		printf("\n%do Nome: ", i+1);
		gets(agenda[i].nome);
		printf("\nFone: ");
		gets(agenda[i].fone);
		printf("\nDia Mes Ano do nascimento");
		scanf("%d %d %d%*c", &agenda[i].nasc.dia,
		&agenda[i].nasc.mes, &agenda[i].nasc.ano);
	}
	
	for (i=0;i<5;i++) {
	printf("\nNome: %s", agenda[i].nome);
	printf("\nFone: %s", agenda[i].fone);
	printf("\nData de nascimento: %d/%d/%d\n",
	agenda[i].nasc.dia, agenda[i].nasc.mes,
	agenda[i].nasc.ano);
	}
	
	return 0;
}
