#include <stdio.h>

int main(void) {
int qtdMaças;
  float custototal;

  printf("Quantas maças você deseja comprar\n"); scanf("%d",&qtdMaças);
  if(qtdMaças<12 && qtdMaças>=0){
    custototal=qtdMaças*1.3;
  printf("Valor total %.2f\n", custototal);
  }else if (qtdMaças>=12){
  custototal=qtdMaças*1.0;
    printf("Valor total R$ %.2f\n", custototal);

  }else{
  printf("Valor digitado invalido\n");
  }
return 0;
}
