#include <stdio.h>

void strdel(char s[], int p)
{
	strcpy(&s[p], &s[p + 1]);
}

void main()
{
	char string[81];
	int posicao;
	printf("Digite a string, e a posicao:\n");
	gets(string);
	scanf("%d", &posicao);
	strdel(string, posicao);
	puts(string);
}


