/*Exerc1.C*/
#include <stdio.h>

int main()
{

    int w[7], i = 3;
	w[0] = 0;
	w[2] = 0;
    w[i] = 32; 
 	w[i/2] = 27; 
 	w[2*i-1] = 7; 
 	w[1+i] = w[1]+i; 
 	w[w[5]-1] = w[i-2] - 5;
 	
 	printf("w[1] = %i\n", w[1]);
 	printf("w[2] = %i\n", w[2]);
 	printf("w[3] = %i\n", w[3]);
 	printf("w[4] = %i\n", w[4]);
 	printf("w[5] = %i\n", w[5]);
 	printf("w[6] = %i\n", w[6]);
 	printf("w[0] = %i\n", w[0]);
	

}
