/*1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.*/

#include <stdio.h>


int main(){

  float num1, num2, num3;
  float media;

  printf("entre com o primeiro numero:");
  int deu_certo = scanf("%f", &num1);

  printf("entre com o segundo numero:");
  deu_certo = scanf("%f", &num2);

  printf("entre com o terceiro numero:");
  deu_certo = scanf("%f", &num3);

  media = (num1 + num2 + num3) / 3;

  printf(" a media aritmetica dos numeros é: %f\n" , media);
  
return 0;
}
