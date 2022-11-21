#include <stdio.h>

int main(void) {
  int x1,x2,x3,x4,x5;
  
  printf("Inserir valor de grupo de 5 digitos x1-x2-x3-x4-x5:\n");
  scanf("%d-%d-%d-%d-%d",&x1,&x2,&x3,&x4,&x5);

  printf("digito1: %d\n", x1);
  printf("digito2: %d\n", x2);
  printf("digito3: %d\n", x3);
  printf("digito4: %d\n", x4);
  printf("digito5: %d\n", x5);

  return 0;
}
