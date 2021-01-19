/*At8.C*/
#include <stdio.h>

int main()
{

    int placa, ultimo;
    printf ("Digite os digitos da placa: ");
    scanf ("%d", &placa);

    ultimo = placa % 10;

    switch (ultimo) {
        case 1:
        case 2: printf ("\nO rodizio e segunda-feira\n"); break;
        case 3:
        case 4: printf ("\nO rodizio e terca-feira\n"); break;
        case 5:
        case 6: printf ("\nO rodizio e quarta-feira\n"); break;
        case 7:
        case 8: printf ("\nO rodizio e quinta-feira\n"); break;
        case 9:
        case 0: printf ("\nO rodizio e sexta-feira\n"); break;
        default: ("\nPlaca inválida\n");
    }

    return 0;

}
