/*1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x
 * A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.*/

#include <stdio.h>

int main() {

  float A1;
  float A2;

  A1 = 6.00f;
  A2 = 3.00f;

  printf("entre com o valor de A1: ");
  int deu_certo = scanf("%f", &A1);

  printf("entre com o valor de A2: ");
  deu_certo = scanf("%f", &A2);

  float media = (0.4 * A1) + (0.6 * A2);

  printf("a media é %f\n", media);
  
 return 0;
}