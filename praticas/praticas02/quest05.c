/*5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).*/

#include <stdio.h>

int main(){
  float peso, altura;
  float imc;

  printf("me de o seu peso:");
  int deu_certo = scanf("%f", &peso);

  printf("me de a sua altura:");
  deu_certo = scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf(" o seu imc é %f\n", imc);

  
  return 0;
}
