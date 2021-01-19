/*At3.C*/
#include <stdio.h>

int main()
{

    int F;
    float C;

    printf ("\nDigite a temperatura em Fahrenheit: ");
    scanf ("%d", &F);

    C = (F - 32) * (5.0 / 9.0);
    printf("Temperatura em Celsius = %.1f\n", C);

    return 0;

}
