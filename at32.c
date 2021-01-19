/*At32.C*/
#include <stdio.h> 

int main(){
	float A[10][3], media, soma; int i, j; // Declaração variáveis
	for (i=0; i<10; i++){    //Percorre linhas para digitação de notas 
		for (j=0; j<2; j++){ // Percorre colunas 0 e 1 para ler notas 
			printf ("Aluno %d - Nota %d: ", i+1 , j+1);
			scanf ("%f", &A[i][j]);
		}	
	A[i][2] = (A[i][0] + A[i][1])/2; // média da linha i
	soma += A[i][2];
	}
	media = soma / 10;
	for (i=0; i<10; i++){ //Percorre linhas para impressão 
		printf("\n");
		for(j=2; j<3; j++) // Percorre colunas para cada linha i
			if (A[i][2] == media) {
				printf("Media aluno %d: %.2f -> Na media", i+1, A[i][j], "\t");
			}
			else if (A[i][2] > media) {
				printf("Media aluno %d: %.2f -> Acima da media", i+1, A[i][j], "\t");
			}
			else
				printf("Media aluno %d: %.2f -> Abaixo da media", i+1, A[i][j], "\t");
	} 
	return 0; 
}
