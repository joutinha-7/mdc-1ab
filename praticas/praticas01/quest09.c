/*9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.*/

#include <stdio.h>

int main(){

  float anos;
  float meses;
  float dias;
  float total;

  printf("entre com o valor de anos");
  int deu_certo = scanf("%f," , &anos);

  printf("entre com o valor  em meses");
  deu_certo = scanf(" %f", &meses);

  printf("entre com o valor de dias");
  deu_certo = scanf("%f", &dias);

  total = anos * 365 + meses * 30 + dias;

  printf("o valor total é %f\n", total);

  return 0;
  
}
