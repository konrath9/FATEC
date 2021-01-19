/*Prova2.C*/
#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} DATA;

typedef struct {
	int hora;
	int minutos;
} HORARIO;

typedef struct {
	char tema[31];
	char nome[21];
	int sala;
	DATA data;
	HORARIO hora;
} PALESTRA;

int main(){

    PALESTRA programacao[1];
	int i;
	
	for (i = 0; i < 1; i++) {
		printf("\nPalestra %d: ", i+1);
		printf("\nTema: ");
		gets(programacao[i].tema);
		printf("Palestrante: ");
		gets(programacao[i].nome);
		printf("Data: (Dia) (Mes) (Ano)\n");
		scanf("%d %d %d%*c", &programacao[i].data.dia,
		&programacao[i].data.mes, &programacao[i].data.ano);
		printf("Horario: (hora) (Minutos)\n");
		scanf("%d %d%*c", &programacao[i].hora.hora,
		&programacao[i].hora.minutos);
		printf("Sala: ");
		scanf("%d%*c", &programacao[i].sala);
	}
	
	for (i = 0;i < 1; i++) {
		printf("\nPalestra %d: ", i+1);
		printf("\nTema: %s", programacao[i].tema);
		printf("\nPalestrante: %s", programacao[i].nome);
		printf("\nData: %02d/%02d/%04d",
		programacao[i].data.dia, programacao[i].data.mes,
		programacao[i].data.ano);
		printf("\nHorario: %02d:%02dh",
		programacao[i].hora.hora, programacao[i].hora.minutos);
		printf("\nSala: %d\n", programacao[i].sala);
	}
	
	return 0;
}
