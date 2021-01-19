/*AtExtraCegonha.C*/
#include <stdio.h>
#include <math.h>

int main()
{
    float H, O, A, IMC, PesoGanho;

    printf ("Digite a altura(m): ");
    scanf ("%f", &H);

    printf ("Digite o peso antes da gravidez(kg): ");
    scanf ("%f", &O);

    printf ("Digite o peso atual(kg): ");
    scanf ("%f", &A);

    IMC = O / (pow(H, 2));

    PesoGanho = A - O;

    if (H <= 0 || O <= 0 || A <= 0)
    {
        printf ("\nValores invalidos, digite apenas numeros positivos.\n");
    }
    else
    {
        if (IMC < 18.5)
        {
            if (PesoGanho < 12.5)
                printf ("\nGanho insuficiente\n");
            else if (PesoGanho <= 18)
                printf ("\nGanho normal\n");
            else
                printf ("\nGanho exagerado\n");
        }
        else if (IMC < 25)
        {
            if (PesoGanho < 11)
                printf ("\nGanho insuficiente\n");
            else if (PesoGanho <= 16)
                printf ("\nGanho normal\n");
            else
                printf ("\nGanho exagerado\n");
        }
        else if (IMC < 30)
        {
            if (PesoGanho < 7)
                printf ("\nGanho insuficiente\n");
            else if (PesoGanho <= 11.5)
                printf ("\nGanho normal\n");
            else
                printf ("\nGanho exagerado\n");
        }
        else if (IMC >= 30)
        {
            if (PesoGanho < 5)
                printf ("\nGanho insuficiente\n");
            else if (PesoGanho <= 9)
                printf ("\nGanho normal\n");
            else
                printf ("\nGanho exagerado\n");
        }
    }


    return 0;
}
