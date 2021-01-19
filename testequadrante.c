/*at23.c*/

#include <stdio.h>

void quadrante(double x, double y) {
	if (x == 0 && y == 0) {
        printf("Origem");
    }
	else if (y == 0) {
        printf("Eixo Y");
    }
	else if (x ==- 0) {
        printf("Eixo X");
    }
	else if (x > 0 && y > 0) {
        printf("Quadrante Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Quadrante Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Quadrante Q3\n");
    }
    else {
        printf("Quadrante Q4\n");
    }
}
	
int main () {
	double x, y;	

	printf ("\nDigite a coordenada X no plano cartesiano: ");
	scanf (" %lf", &x);
	printf ("\nDigite a coordenada Y no plano cartesiano: ");
	scanf (" %lf", &y);
	
	printf("\nLocalizacao do ponto: ");
	quadrante(x, y);

	return 0;
}
