
#include <stdio.h>

int main(void) {
  int D,m,a;
  printf("Inserir uma data d/m/ano:\n");
  scanf("%d""/""%d""/""%d", &D, &m, &a);
  printf("Digitos inseridos: %d%d%d \n", D,m,a);
  return 0;
}
