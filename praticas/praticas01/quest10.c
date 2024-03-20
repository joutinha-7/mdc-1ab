/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/

#include <stdio.h>

int main(){

  int numero, unidade, dezena, centena, milhar;

  printf("entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);
  if(!deu_certo);

  unidade = numero % 10;

  dezena = numero / 10 % 10;

  centena = numero / 100 % 10;

  milhar = numero / 1000 % 10;

  printf("o numero %i tem %i unidades, %i dezenas, %i centenas, %i milhares\n", numero, unidade, dezena, centena, milhar);
  
  return 0;
}
