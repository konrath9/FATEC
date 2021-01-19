/*At9.C*/
#include <stdio.h>

int main()
{

    int faltas;
    float media;

    printf ("\nDigite a quantidade de faltas: ");
    scanf ("%d", &faltas);

    printf ("\nDigite a media: ");
    scanf ("%f", &media);

    if (faltas > 5)
    {
        printf ("\nConceito F\n");
    }
    else if (media < 6)
    {
        printf ("\nConceito C\n");
    }
    else if (media < 7.5)
    {
        printf ("\nConceito B\n");
    }
    else if (media < 9)
    {
        printf ("\nConceito A\n");
    }
    else
    {
        printf ("\nConceito E\n");
    }

    return 0;

}
