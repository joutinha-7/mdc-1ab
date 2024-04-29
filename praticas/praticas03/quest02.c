/*2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.*/

#include <stdio.h>

int main() {
  float valor_bruto;
  float valor_desconto;

  printf("entre com o valor bruto:");
  int leu_certo = scanf("%f", &valor_bruto);
  
  if (leu_certo) {
  if (valor_bruto <= 100.00f) {
    valor_desconto = valor_bruto * 0.01f;
  } else if (valor_bruto <= 500.0f) {
    valor_desconto = valor_bruto * 0.05f;
  } else { 
  valor_desconto = valor_bruto * 0.1f;
  }
  printf("o valor do desconto é %.2f\n", valor_desconto);
  }else{ 
    printf("valor invalido. tente novamente\n");
  }

  
  return 0;
}
