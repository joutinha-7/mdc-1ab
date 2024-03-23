/*3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).*/

#include <stdio.h>

int main(){
  float c, f;

  printf("me de o valor de Celsius: ");
  int deu_certo = scanf("%f", &c);

  printf("me de o valor de \farnheit: ");
  deu_certo = scanf("%f", &f);

  f = (c * 9/5) + 32;

  printf("o valor de Fahrenheit é: %f\n", f);
  

  return 0;
}
