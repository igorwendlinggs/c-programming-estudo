#include <stdio.h>

int main (void){
int valor,n20,n10,n5,n1,r20,r10,r5,r1;

  printf("Insira valor de saque:\n");
scanf("%d", &valor);

n20=valor/20;
r20=valor%20;

n10=r20/10;
r10=valor%10;
  
n5=r10/5;
r5=valor%5;

n1=r5/1;
r1=valor%1;

printf("Notas de 20: %d:\n", n20);
printf("Notas de 10: %d:\n", n10);
printf("Notas de 5: %d:\n", n5);
printf("Notas de 1: %d:\n", n1);

return 0;
  }
