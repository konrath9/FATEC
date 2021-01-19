/*At2.C*/
#include <stdio.h>

int main()
{

    float imc, altura, peso;

    printf ("Digite peso e altura nessa sequencia\n");
    scanf ("%f %f", &peso, &altura);

    imc = peso / (altura * altura);
    printf("Seu imc e %.2f", imc);

    return 0;

}
