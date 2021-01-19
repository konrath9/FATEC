#include <stdio.h>

int main(){
    int x, y, soma, troca;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

	soma = 0;
    for (int i=x; i<y+1; i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        }
    }

    printf("Soma dos pares no intervalo = %d\n", soma);

    return 0;
}
