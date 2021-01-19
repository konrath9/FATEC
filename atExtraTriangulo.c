/*AtExtraTriangulo.C*/
#include <stdio.h>

int main() {

  int n, i, saida = 0, somador = 1;

  do {
    printf("\nEntre com um numero inteiro natural: ");
    scanf("%d", &n);
  }while (n <= 0);

  for (i = 0; i < n; i++) {
    saida = saida + somador;
    somador = somador + 1;
  }

  printf("\n%d-esimo numero triangular = %d\n", n, saida);

  return 0;

}
