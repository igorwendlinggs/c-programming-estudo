#include <stdio.h>

int main(void){
  int m, n, i,resto;

  printf("Insira m e n\n");
  scanf("%d%d", &m, &n);

  if(m>n){
     while(n!=0){
      resto= m%n;
      m=n;
      if(resto==0){
        break;
      }else{
      n=resto;
      }
    } 
  }

  printf("%d", n);
  return 0;
}  
