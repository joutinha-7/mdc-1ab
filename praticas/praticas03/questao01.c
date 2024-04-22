#include <stdio.h>

int main() {

  int numero;

  printf("entre com um numero inteiro:");
  int deu_certo = scanf("%i", &numero);
if (deu_certo) {
  if (numero % 2 == 0) {
    printf("o numero %i é par!\n", numero);

  } else {
    printf("o numero %i é ímpar!\n", numero);
  }
} else {
  printf("numero invalido!\n");
}

return 0;
}