#include <stdio.h>

int main(void){
int i=1,x=0;

for(;i!=0 && i!=-1;){
printf("Insira um valor:\n");
scanf("%d",&i);
if(i>=x)
x = i;
}
printf("Maior valor: %d", x);
return 0;
}
