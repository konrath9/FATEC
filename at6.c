/*At6.C*/
#include <stdio.h>

int main()
{

    char caracter;

    printf("\nDigite o caracter: ");
    caracter = getchar();

    printf("\nOctal = %o\n", caracter);
    printf("Decimal = %d\n", caracter);
    printf("Hexadecimal = %x\n", caracter);

    return 0;

}
