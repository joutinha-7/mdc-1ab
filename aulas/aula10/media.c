#include <stdio.h>

int main() {
  int numero[10];
  int soma = 0;
  
  for (int i=0; i<10; i++){
    printf("entre com o %i numero:", i);
    int deu_certo = scanf("%i", &numero[i]);
    soma = soma + numero[i];
  }

  float media = soma / 10.0f;
  printf("a media de");
  for(int i = 0; i < 10; i++){
    printf("%i + ", numero[i]);
  }
  printf("= %.1f\n", media);
  

  return 0;
}