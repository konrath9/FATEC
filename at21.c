/*at21.C*/
#include <stdio.h>
#include "boolean.h"

//Programa teste

int main()
{
    printf("%s ", bool(not false) );
    printf("%s ", bool(false and true) );
    printf("%s ", bool(true or false) );
    return 0;
}
