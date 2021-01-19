/*At42.C*/
#include <stdio.h>
#include <math.h>

typedef struct {
	float x, y;
} PONTO;

float distancia(PONTO P, PONTO Q) {
    return (sqrt(pow(P.x - Q.x, 2)+ pow(P.y - Q.y, 2)));
}

int main(){	
	int i, n = 2;	
	char Letra = 'A';
	PONTO pontos[n];
	
	for (i = 0; i < n; i++) {
		printf("\nCoordenada x do ponto %c: ", Letra + i);
		scanf("%f", &pontos[i].x);
		printf("Coordenada y do ponto %c: ", Letra + i);
		scanf("%f", &pontos[i].y);
		printf("\nPonto %c: (%0.2f, %0.2f)\n", Letra + i, pontos[i].x, pontos[i].y);
	}
	
	printf ("\nDistancia entre pontos: %.2f", distancia(pontos[0], pontos[n - 1]));
	
	return 0;
}
