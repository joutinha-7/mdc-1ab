/*2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.*/

#include <stdio.h>

int main(){

  float num1, num2;
  float quociente;
  float resto;

  printf("digite o primeiro numero:");
  int deu_certo = scanf("%f", &num1);

  printf("digite o numero dois");
  deu_certo = scanf("%f" , &num2);

  printf("me de o quociente:");
  deu_certo = scanf("%f", &quociente);

  printf("me de o resto:");
  deu_certo = scanf("%f", &resto);

  quociente = num1 / num2;

  resto = num1 / num2;

  printf("o quociente é %f\n" , quociente);
  printf("o resto é %f\n", resto);

    

  return 0;
}
