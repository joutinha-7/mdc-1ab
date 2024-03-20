/*6. Faça um programa em C que calcule as raízes de uma equação do 2° grau
 * através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/

#include <stdio.h>
#include <math.h>

int main() {

  float a;
  float b;
  float c;
  float delta;
  float x1;
  float x2;

  printf("entre com o valor de a");
  int deu_certo = scanf("%f", &a);

  printf("entre com o valor de b");
  deu_certo = scanf("%f", &b);

  printf("entre com o valor de c");
  deu_certo = scanf("%f", &c);

  printf("entre com o valor de delta");
  deu_certo = scanf("%f", &delta);

  printf("entre com o valor de x1");
  deu_certo = scanf("%f", &x1);

  printf("entre com o valor de x2");
  deu_certo = scanf("%f", &x2);

  delta = ( b * b - 4 * a * c);
  x1 = (-b + sqrt(delta));
  x2 = (-b - sqrt(delta));

  printf("o valor de delta é %f\n", delta);
  printf("o valor de x1 é %f\n", x1);
  printf("o valor de x2 é %f\n" , x2);
  
  return 0;
}
