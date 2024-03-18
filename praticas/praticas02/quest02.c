/*2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.*/

#include <stdio.h>

int main(){

  float base;
  float altura;

  printf("entre com os valores da base e da altura: ");

  int deu_certo = scanf("%f %f", &base, &altura);

  float area = base * altura / 2;
  printf(" a area do triangulo é %f\n", area);

  return 0;
}