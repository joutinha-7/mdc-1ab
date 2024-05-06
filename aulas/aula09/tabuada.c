#include <stdio.h>

int main() {
  int numero;

  printf("entre com um numero de 1 a 10");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo && numero > 0 && numero < 11) {
    printf("tabuada de %i\n", numero);
    //printf("1 x %i = %i\n", numero, numero * 1);
    //printf("2 x %i = %i\n", numero, numero * 2);
    //printf("3 x %i = %i\n", numero, numero * 3);
    //printf("4 x %i = %i\n", numero, numero * 4);
    //printf("5 x %i = %i\n", numero, numero * 5);
    //printf("6 x %i = %i\n", numero, numero * 6);
    //printf("7 x %i = %i\n", numero, numero * 7);
    //printf("8 x %i = %i\n", numero, numero * 8);
    //printf("9 x %i = %i\n", numero, numero * 9);
    //printf("10 x %i = %i\n", numero, numero * 10);

    for (int i = 1; i <= 10; i++) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
    printf("a tabuada invertida de %i\n", numero);
      for (int i = 10; i > 0; i--) {
        printf("%i x %i = %i\n", i, numero, i * numero);
      }
  } else {
    printf("numero invalido. tente novamente\n");
  }

  return 0;
}