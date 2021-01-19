/*At17.C*/
#include <stdio.h>

int main() {

  int n, i;
  float x, pot = 1;

  printf("\nDigite a base (X) e o expoente (n): ");
  scanf("%f %d", &x, &n);

  for (i = 0; i < n; i++)
    pot = pot * x;

  printf("Resultado: %.2f", pot);

  return 0;
}
