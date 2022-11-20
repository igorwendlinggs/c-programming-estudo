#include <stdio.h>

int main(void){
float v,b,T;
char per;

  
  printf("Insira um valor:\n");
  scanf("%f", &v);
  
  printf("Insira a % de bônus:\n");
  scanf("%f""%", &b);
  
T=(b/100)*v+v;

  printf("Total + bônus: %.2f\n", T);

return 0;
}
