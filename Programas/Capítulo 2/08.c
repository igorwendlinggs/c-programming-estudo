#include <stdio.h>

int main(void){
float emprestimo,pagMes,divida;
int mes;

printf("Insira o valor do empréstimo:\n");
scanf("%f", &emprestimo);


printf("Insira em quantos meses:\n");
scanf("%d", &mes);

pagMes=emprestimo/mes;
  
printf("O valor a ser pago mensalmente é: %.2f\n", pagMes);
 

return 0;
}
