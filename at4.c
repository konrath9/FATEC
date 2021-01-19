/*At4.C*/
#include <stdio.h>
#define PI 3.1415

int main()
{

    float raio, area, perimetro;

    printf ("\nDigite o raio da circunferencia: ");
    scanf ("%f", &raio);

    area = PI * (raio * raio);
    perimetro = 2 * PI * raio;

    printf("\nArea da circunferencia = %.2f\nPerimetro da circunferencia = %.2f\n", area, perimetro);

    return 0;

}
