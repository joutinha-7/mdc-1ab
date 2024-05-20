/*1. Faça um programa em C que preencha uma matriz com 10 números, depois leia um número e localize a posição dele na matriz.*/

#include <stdio.h>
int main() {
  int numeros[10];

  for(int i = 0;i < 10; i++) {
    printf("entre com o %i numero:", i + 1);
    int deu_certo = scanf("%i", &numeros[i]);
  }

  int numero;
  printf("entre com o numero a ser localizado:");
  int deu_certo = scanf("%i", &numero);
  int achei = -1;

  for(int i = 0; i < 10; i++) {
    if (numero == numeros[i]) {
      achei = i;
      break;
    }
  }

  if (achei < 0) {
    printf("numero %i nao encontrado\n", numero);
  } else {
    printf("numero %i encontrado na posicao %i\n", numero, achei);
  }

  return 0;
}
