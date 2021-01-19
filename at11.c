/*At11.C*/
#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("\nDigite uma sequencia terminada por zero: ");

    do {
        scanf("%d", &num);
        soma = soma + num;
    } while (num != 0);

    printf("\nSoma da sequencia: %d\n", soma);

    return 0;
}
