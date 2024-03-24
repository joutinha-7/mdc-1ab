/*4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).*/

#include <stdio.h>


int main(){

  float largura, comprimento;
  float metros, hectares;

  printf("me de a largura em metros:");
  int deu_certo = scanf("%f", &largura);

  printf("me de o comprimento em metros:");
  deu_certo = scanf("%f", &comprimento);

  metros = largura * comprimento;

  printf("a area em metros é %f\n", metros);

  hectares = metros / 10000;
  

  return 0;
}