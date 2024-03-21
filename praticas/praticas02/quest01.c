/*1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.*/

#include <stdio.h>


int main(){

  float num1, num2, num3;
  float media;

  printf("digite o primeiro numero:");
  int deu_certo = scanf("%f", &num1);

  printf("digite o numero dois:");
  deu_certo = scanf("%f", &num2);

  printf("digite o numero tres:");
  deu_certo = scanf("%f", &num3);

  media = (num1 + num2 + num3) / 3;

  printf(" a media aritmetica dos nuemros é: %f\n" , media);
  
return 0;
}
