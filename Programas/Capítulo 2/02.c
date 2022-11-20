#include <stdio.h>

int main(void){
float pi=3.14,v,r3;
int r;

printf("Insira um valor de raio:\n");
scanf("%d", &r);
r3=r*r*r;
v=(4.0f/3.0f)*pi*r3;
printf("O volume da esfera é:%.2f\n", v);
  return 0;
}
