#include <stdio.h>

int main()
{

    int ddd;
    printf ("\nDigite o DDD: ");
    scanf ("%d", &ddd);

    switch (ddd) {
        case 61: printf ("\nO DDD e de Brasilia\n"); break;
        case 71: printf ("\nO DDD e de Salvador\n"); break;
        case 11: printf ("\nO DDD e de Sao Paulo\n"); break;
        case 21: printf ("\nO DDD e do Rio de Janeiro\n"); break;
        case 32: printf ("\nO DDD e de Juiz de Fora\n"); break;
        case 19: printf ("\nO DDD e de Campinas\n"); break;
        case 27: printf ("\nO DDD e de Vitoria\n"); break;
        case 31: printf ("\nO DDD e de Belo Horizonte\n"); break;
        default: printf ("\nDDD nao cadastrado\n");
    }

    return 0;

}
