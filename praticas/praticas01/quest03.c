/*3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x
 * r). Considere o raio um número inteiro e a constante PI igual a 3,1416.*/

#include <stdio.h>

int main() {

  int raio;
  float PI = 3.1416;

  printf("entre com o valor do raio: ");
  int deu_certo = scanf("%i", &raio);

  printf("entre com o valor de PI: ");
  deu_certo = scanf("%f", &PI);

  float perimetro = (PI = 2 * PI * PI * raio);

  printf("o perimetro é %f\n", perimetro);

  return 0;
}
