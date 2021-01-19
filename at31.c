/*At31.C*/
#include <stdio.h> 
#define max 7 

void obtem(float t[]) {
 int i;
 printf ("Digite as temperaturas: ");
 for(i = 0; i < max; i++) {
 printf("%do valor? ", i + 1);
 scanf("%f", &t[i] );
 }
}


float media(float t[]) {
 int i;
 float soma = 0;
 for(i = 0; i < max; i++)
 soma += t[i];
 return soma / max;
} 


int conta(float t[], float m) {
 int i, c = 0;
 for(i = 0; i < max; i++)
 if( t[i] > m )
 c++;
 return c;
} 



int main() {
	float temp[max], m;	
	obtem(temp);
	m = media(temp);
	printf ("Estatistica: %d", conta(temp, m) );
	return 0;
}
