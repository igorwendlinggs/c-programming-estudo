#include <stdio.h>

int main(void){
float x,X5,X4,X3,X2,R,R2;
  printf("Insira o valor de x:\n");
  scanf("%f", &x);
X5=x*x*x*x*x;
X4=x*x*x*x;
X3=x*x*x;
X2=x*x;

R2= (3*X5 +2*X4 -5*X3 -X2 + 7*x -6);
  
R=((((3*x+2)*x-5)*x-1)*x+7)*x-6; //Horner's Rule

  printf("Resultado: %.2f\n", R2);
  printf("Resultado usando Esquema de Horner: %.2f\n", R);
  
 return 0;
}
