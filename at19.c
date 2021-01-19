/*At19.C*/
#include <stdio.h>

int main() {

  int n, i, quad = 0, somador = 1;

  printf("\nEntre com um numero: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    quad = quad + somador;
    somador = somador + 2;
  }

  printf("Resultado: %d", quad);

  return 0;

}
