/*at22.C*/
#include <stdio.h>
#include "conversorletra.h"

//Programa teste

int main()
{
    char c;
    c = 'F';
    printf ("c = F\n");
    printf ("%i ", eh_minuscula(c) );
    printf ("\n%i ", eh_maiuscula(c) );
    printf ("\n%c ", minuscula(c) );
    printf ("\n%c ", maiuscula(c) );
    printf ("\n\n==========================\n");
    c = 'f';
    printf ("\nc = f\n");
    printf ("%i ", eh_minuscula(c) );
    printf ("\n%i ", eh_maiuscula(c) );
    printf ("\n%c ", minuscula(c) );
    printf ("\n%c ", maiuscula(c) );

    return 0;
}
