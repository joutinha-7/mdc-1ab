/*5. Faça um programa em C que converta um valor qualquer em Gigabytes para um
 * valor em bytes (1GB = 1024³Bytes).*/

#include <stdio.h>

int main() {

  float GB;
  float BY;

 
  printf("entre com o valorde GB");
  int deu_certo = scanf("%f", &GB);

  printf("entre com o valor de By");
  deu_certo = scanf("%f", &BY);

  float By = GB * BY;

  printf("o valor de BY é %f\n", BY);

  
  return 0;
}
