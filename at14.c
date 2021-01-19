/*At14.C*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, quadrado;

    printf("\nDigite uma sequencia de numeros inteiros terminadas por 0:  ");

    do {
        scanf ("%d", &num);
        quadrado = pow(num, 2);
        printf ("%d   ->   %d\n", num, quadrado);
    } while (num != 0);

    printf("Programa encerrado.");

    return 0;
}

