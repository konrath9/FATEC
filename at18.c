/*Letra.C*/
#include <stdio.h>

int main() {

  char c;

    do {
        printf ("\nDigite um caracter qualquer: ");
        scanf ("%c", &c);

        if ((c >= 65) && (c <= 90)){
            c = c + 32;
            printf ("%c", c);
        }
        else if ((c >= 97) && (c <= 122))
            printf ("E uma letra");
    } while ((c >= 97 && c <= 122));

  return 0;

}
