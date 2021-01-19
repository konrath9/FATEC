/*At35.C*/
#include <stdio.h>

int strpos(char *s, char *c)
{
   char *p = strstr(s, c);
   if (p)
      return p - s;
   return -1;
}

int main(){

    printf("%d", strpos("Programa de teste", "t"));

    return 0;
}
