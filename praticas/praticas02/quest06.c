/*6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).*/

#include <stdio.h>
#include <math.h>

int main() {

  float valor_compra;
  float ano_fabricacao;
  float ano_depreciacao;
  float valor_depreciado;

  printf("entre com o valor de compra do veiculo: ");
  int deu_certo = scanf(" %f", &valor_compra);

  printf("entre com o ano de frabricação do veículo: ");
  deu_certo = scanf(" %f", &ano_fabricacao);

  printf("entre com o ano de depreciação do veículo: ");
  deu_certo = scanf(" %f", &ano_depreciacao);

  valor_depreciado = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;
  
  printf("o valor depreciado do veículo %f\n", valor_depreciado);
  
  
  return 0;
}
