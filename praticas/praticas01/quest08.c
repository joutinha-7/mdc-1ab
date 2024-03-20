/*8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).*/

#include <stdio.h>

int main(){

  float segundos;
  float horas;
  float minutos;

  printf("entre com o valor de segundos");
  int deu_certo = scanf("%f" , &segundos);

  printf("entre com o valor de horas");
  deu_certo = scanf("%f" , &horas);

  printf("entre com o valor de minutos");
  deu_certo = scanf("%f", &minutos);

  printf("entre com o valor de segundos");
  deu_certo = scanf("%f", &segundos);

  horas = segundos / 3600;

  minutos = segundos / 60;

  segundos = segundos / 1;

  printf(" o valor de horas é %f\n" , horas);

  return 0;
}
