/*conversorletra.h*/

#define eh_minuscula(c) ((c >= 'a' && c <= 'z')? 1:0)
#define eh_maiuscula(c) ((c >= 'A' && c <= 'Z')? 1:0)
#define minuscula(c) (eh_maiuscula(c)? ((c) + ('a' - 'A')):(c))
#define maiuscula(c) (eh_minuscula(c)? ((c) - ('a' - 'A')):(c))
