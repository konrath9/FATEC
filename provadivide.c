#include <stdio.h>


int divide(int a, int b){
    if( a-b < 0)
      return 0;
    else if ( a-b == 0)
      return 1;
    else {
      return divide(a-b, b) + 1;
    }
  }


int main() {
	int a;
	int b;
	printf("\nDigite a e b: ");
	scanf("%u %u", &a, &b);
	printf("\n%u / %u = %u", a, b, divide(a, b));
	return 0;
}
