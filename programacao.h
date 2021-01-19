/* programacao.h */

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

void LeProgramacao(PALESTRA prog[], int n) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("\nPalestra %d: ", i+1);
		printf("\nTema: ");
		gets(prog[i].tema);
		printf("Palestrante: ");
		gets(prog[i].nome);
		printf("Data: (Dia) (Mes) (Ano)\n");
		scanf("%d %d %d%*c", &prog[i].data.dia,
		&prog[i].data.mes, &prog[i].data.ano);
		printf("Horario: (hora) (Minutos)\n");
		scanf("%d %d%*c", &prog[i].hora.hora,
		&prog[i].hora.minutos);
		printf("Sala: ");
		scanf("%d%*c", &prog[i].sala);
	}
}

void ImprimeProgramacao(PALESTRA prog[], int n) {
	int i;
	
	for (i = 0;i < n; i++) {
		printf("\nPalestra %d: ", i+1);
		printf("\nTema: %s", prog[i].tema);
		printf("\nPalestrante: %s", prog[i].nome);
		printf("\nData: %02d/%02d/%04d",
		prog[i].data.dia, prog[i].data.mes,
		prog[i].data.ano);
		printf("\nHorario: %02d:%02dh",
		prog[i].hora.hora, prog[i].hora.minutos);
		printf("\nSala: %d\n", prog[i].sala);
	}
}
