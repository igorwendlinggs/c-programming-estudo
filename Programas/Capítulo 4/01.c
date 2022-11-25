
#include <stdio.h>
int main(void){
  int x=0;
  printf("Entre com um inteiro de dois digitos:\n");
  scanf("%d",&x);
  printf("%d%d",x%10,x/10);
  return 0;
}
