/*At5.C*/
#include <stdio.h>

int main()
{

    float consumo, km, litros;

    printf ("\nDigite a distancia percorrida em quilometros: ");
    scanf ("%f", &km);
    printf ("Digite o combustivel gasto em litros: ");
    scanf ("%f", &litros);

    consumo = litros / km;

    printf("\nO consumo medio e de %.2f litros/km\n", consumo);

    return 0;

}
