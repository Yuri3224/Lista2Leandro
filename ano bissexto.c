//ano bissexto  
#include <stdio.h>
#include <conio.h>

int main(){

  int ano;
  printf("Informe um ano para saber se ele eh bissexto ou nao: \n");
  scanf("%d", &ano);
  
  if (ano % 4 == 0) {
    printf("\nAno bissexto.\n");
  
  }
  
  else {
    printf("\nO Ano informado nao eh bissexto.\n");
  
  }

}