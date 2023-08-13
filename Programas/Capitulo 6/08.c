#include <stdio.h>

int main(void){
  int i, repeticoes, dias, inicio_mes,n;

  printf("Qnts dias no mês?\n");
  scanf("%d", &dias);

  printf("Qual primeiro dia do mês?\n");
  scanf("%d", &inicio_mes);

  repeticoes = dias + (inicio_mes - 1);
  n=1;

  for(i=1;i <= repeticoes; i++){
    if(i<inicio_mes)
      printf("   ");
    else{
      printf("%3d", n++);
    }

    if(i % 7 == 0)
      printf("\n");

  }

  

  return 0;
}
