/*At41.C*/
#include <stdio.h>

typedef struct {
	char nome[21];
	char matricula[9];
	float media;
} ALUNO;

void LeAlunos(ALUNO t[]) {
	int i;
	
	for (i=0; i<5; i++) {
		printf("\n Aluno: ");
		gets(t[i].nome);
		printf("\nMatricula: ");
		gets(t[i].matricula);
		printf("\nMedia final:");
		scanf("%f%*c", &t[i].media);
	}
}

void Imprime(ALUNO t[]) {
	int i;
	for (i=0;i<5;i++) {	
	printf("\nAluno: %s", t[i].nome);
	printf("\nMatricula: %s", t[i].matricula);
	printf("\nMedia: %.1f\n",	t[i].media);
	}
}



int main(){

    ALUNO t[5];
	LeAlunos(t);
	Imprime(t);
	
	return 0;
}
