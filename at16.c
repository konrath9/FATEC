/*At16.C*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, fatorial;

  printf("\nDigite um inteiro nao-negativo: ");
  scanf("%d", &n);

  /* inicializacoes */
  fatorial = 1;
  i = 2;

  while (i <= n) {
    fatorial = fatorial * i;
    i = i + 1;
  }
  printf("Fatorial de %d = %d\n", n, fatorial);

  return 0;
}
