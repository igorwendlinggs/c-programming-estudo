#include <stdio.h>

int main(void){
int x;

printf("Insira a velocidade do vento:(knots)\n");
scanf("%d", &x);

  if(x<1)
    printf("\nCalmo");
  else if (x <=3)
    printf("\nVento leve");
  else if (x >=4 && x<=27)
    printf("\nBrisa");
  else if(x>=28 && x<=47)
    printf("\nVentania");
  else if(x>=48 && x<=63)
    printf("\nTempestade");
  else if (x>63)
    printf("\nFuracão");
   


return 0;
}
