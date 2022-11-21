#include <stdio.h>

int main(void) {
int x1,x2,x3;

printf("Inserir telefone no formato (xxx) xxx-xxx\n"); 
scanf("(%d)%d-%d", &x1, &x2, &x3);

printf("Telefone :\n");
printf("%d.%d.%d",x1,x2,x3);

return 0;
}
