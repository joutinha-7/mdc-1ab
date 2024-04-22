/*2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.*/

#include <stdio.h>

int main(){

  int num1, num2;
  float quociente;
  float resto;

  printf("digite o primeiro numero:");
  int deu_certo = scanf("%i", &num1);

  printf("digite o numero dois");
  deu_certo = scanf("%i" , &num2);

  quociente = num1 / num2;

  resto = num1 % num2;

  printf("o quociente é %f\n" , quociente);
  printf("o resto é %f\n", resto);

    

  return 0;
}
