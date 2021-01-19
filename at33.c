/*At33.C*/
#include <stdio.h> 

int main () {
char frase[50];
int i, espaco = 0, total = 0;

printf("Digite a frase\n");
fgets(frase, 51, stdin);

for(i=0; frase[i]!='\0'; i++) {
	if(!espaco && frase[i] != ' ') {
		espaco = 1;
		total++;
	}
	else if(espaco && frase[i] == ' ')
		espaco = 0;
}
printf("O numero de palavras eh: %d\n", total);

return 0;
}
