/*At7.C*/
#include <stdio.h>

int main()
{

    int n;
    printf ("Digite um numero: ");
    scanf ("%d", &n);

    printf ("\n%s\n", (n%2)==0 ? "Par":"Impar");

    return 0;

}
