#include <stdio.h>

int main(void){
int h,m;

  printf("Inserir Horas:Minutos\n");
  scanf("%d:%d", &h, &m);
  /*printf("%d %d", h, m);*/

  if(h >= 1 && h<=12){
    printf("Formato 12h:\n%.2d:%.2d AM", h, m);
  }

  if(h >= 13 && h<=24){
    printf("Formato 12h:\n%.2d:%.2d PM", h>=12 ? h-12 : 12-h, m);
  }
  
return 0;
}
