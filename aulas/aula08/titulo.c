#include <stdio.h>

int main() {

  int idade;

  printf("entre com a idade:");
  int leu_certo = scanf("%i", &idade);

  if (leu_certo) {
  if (idade < 16) { 
  printf("ainda não pode votar!\n");
  }else if (idade >= 18 && idade <= 70) {
    printf("o voto é obrigatorio.\n");
  }else{ 
  printf("o voto é opcional");
  }
}else{
  printf("idade invalida. tente novamente!\n");
}

  return 0;

}