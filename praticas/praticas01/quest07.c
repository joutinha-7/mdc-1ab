/*7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.*/

#include <stdio.h>

int main(){
  float distancia;
  float angulo;
  float altura;

  printf("entre com o valor da distancia");
  int deu_certo = scanf("%f", &distancia);

  printf("entre com o valor do angulo");
  deu_certo = scanf("%f", &angulo);

  altura = distancia * angulo;

  printf("a altura é %f\n", altura);
  

  return 0;
}
