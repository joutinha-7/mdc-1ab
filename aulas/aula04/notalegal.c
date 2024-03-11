#include <stdio.h>

int main() {
  
  printf("-------------------------------------- \n");
  printf("            N O T A  L E G A L         \n");
  printf("-------------------------------------- \n");
  printf("ITEM               QTD           PRECO \n");

  
  printf("Banana prata      1       15.00 \n");
  printf("Laranja           10      20.00 \n");
  printf("Maca fuji         6       30.00 \n");

  

  char item1[31] = "Banana prata";
  int qtde = 1;
  float preco = 15.00f;

  printf("%14s  %-3i  %11.2f\n" , item1, qtde, preco);

  
  char item2[31] = "Laranja";
  qtde = 10; 
  preco = 20.00f;

  printf("%14s  %3i  %11.2f\n" , item2, qtde, preco);
  
  
  char item3[31] = "Maca fuji";
  qtde = 6;
  preco = 30.00f;
  
  printf("%14s  %3i  %11.2f\n" , item3, qtde, preco);
  
  printf("-------------------------------------- \n");
  printf("Total            %11.2f\n" , 65.00f);

  //printf("banana      1       15.00 \n");
  //printf("laranja     10      20.00 \n");
  //printf("maca fuji   6       30.00 \n");
  
return 0;
}