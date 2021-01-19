/*At12.C*/
#include <stdio.h>

int main()
{
    int x = 5, y = 0;

    y = x++ + ++x;

    printf("%d %d", x, y);

    return 0;
}
