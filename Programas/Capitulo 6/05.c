#include <stdio.h>

int main(void){
  int x; ;
  printf("Insira um número inteiro\n");
  scanf("%d", &x);
  
  do{
    printf("%d", x%10);
    x /= 10;
  }while(x!=0);

  return 0;
}
