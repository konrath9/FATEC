/*At15.C*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long conta;
    int soma=0, dig, aux, alg;

    printf("\nDigite o numero da conta: ");
    scanf ("%d", &conta);

    while ((conta < 1) || (conta > 999999)) {
        printf("Conta Inválida. Reinforme o número da conta sem o DV: ");
        scanf("%d", &conta);
    }

    aux = conta;

    while (aux > 0) {
    alg = aux % 10;
    soma += alg;
    aux /= 10;
    }

    dig = soma % 10;
    printf("Numero de conta completo: %.6ld-%d\n", conta, dig);

    return 0;
}

