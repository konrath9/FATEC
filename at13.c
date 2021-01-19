/*At13.C*/
#include <stdio.h>

int main()
{
    int x = 3, y = 0;

    y = x * (x + 1) * x++;

    printf("%d %d", x, y);

    return 0;
}
