#include <stdio.h>

int main(void){
  int m, n, i,resto, mdc, M,N;

  printf("Insira a fração\n");
  scanf("%d/%d", &m, &n);

  int x=m,y=n;
  
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

  mdc = n;
  M = x/mdc;
  N = y/mdc;
  printf("MDC = %d\n", mdc);
  printf("fração menor termo : %d/%d", M,N);

  
    
  }

  if(n>m){
     while(m!=0){
      resto= n%m;
      n=m;
      if(resto==0){
        break;
      }else{
      m=resto;
      }
    } 

    mdc = n;
  M = x/mdc;
  N = y/mdc;
  printf("MDC = %d", mdc);
  printf("fração menor termo : %d/%d", M,N);
  }

  return 0;
  
}  
