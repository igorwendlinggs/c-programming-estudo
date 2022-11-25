#include <stdio.h>
int main(void){
  int x=0;
  printf("Entre com um inteiro de três digitos:\n");
  scanf("%d",&x);
  printf("%d%d%d",x%10,(x/10)%10,(x/100));
  return 0;
}
