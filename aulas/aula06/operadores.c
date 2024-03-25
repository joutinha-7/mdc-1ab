#include <stdio.h>
#include <math.h>

int main(){

  int num1;
  int num2;
  const double PI = 3.14;

  printf("entre com o valor de num1:");
  int deu_certo = scanf("%i", &num1);

  printf("entre com o valor de num2:");
  deu_certo = scanf("%i", &num2);

  int resultado = num1 + num2;
  printf(" a soma dos numeros é %i\n", resultado);

  resultado = num1 - num2;
  printf(" a subtracao dos numeros é %i\n", resultado);
  
  resultado = num1 * num2;
  printf("a multiplicacao dos numeros é %i\n", resultado);

  resultado = num1 / num2;
  printf(" a divisao dos numeros é %i\n", resultado);

  float resultado2 = num1 / (num2 * 1.0); // conversao implicita
  printf(" a divisao dos numeros é %.1f\n", resultado2);


  resultado = num1 % num2;
  printf(" o resto da divisao dos numeros é %i\n", resultado);

  // num1 = num1 + 1;
  // num1++;
  //++num1;

  printf("o incremento de num1 é %i\n", num1++);
  printf("o incremento de num1 é %i\n", ++num1);

  //num1 = num1 - 1;
  //num1--;
  //--num1;
  
  printf("o decremento de num1 é %i\n", num1--);
  printf("o decremento de num1 é %i\n", --num1);

  double raiz = sqrt(num1);
  printf(" a raiz de num1 é %.2f\n", raiz);
  
  double potencia = pow(num1, 3); //num1^3
  printf("a potencia de num1 é %.2f\n", potencia);

  double logaritmo_base2 = log2(num1);
  printf("o logaritmo de num1 na base 2 é %.2f\n", logaritmo_base2);

  double seno = sin(num1 * (PI / 180));
  printf("o seno de num1 é %.2f\n", seno);

  return 0;
}