#include <stdio.h>

int main() {

  float nota1;
  float nota2;

  printf("entre com a nota1:");
  int deu_certo = scanf("%f", &nota1);

  //).0f <= nota1 <= 10.0
  if (nota1 >= 0.0f && nota1 <= 10.0f) {

    printf("entre com a nota2:");
    deu_certo = scanf("%f", &nota2);

    if (nota2 > -0.0f && nota2 <= 10.0f) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("a media é %.1f\n", media);

      if (media >= 9.0f && media <= 10.0f) {
        printf("a mensao é SS\n");
      } else if (media >= 7.0f && media <= 8.9f) {
        printf("a mensao é Ms\n");
      } else if (media >= 5.0f && media <= 6.9f) {
        printf("a mensao é MM\n");
      } else if (media >= 3.0f && media <= 4.9f) {
        printf("a mensao é MI\n");
      } else if (media >= 0.1f && media <= 2.9f) {
        printf("a mensao é II\n");
      }
    } 
    }  
  return 0;
}