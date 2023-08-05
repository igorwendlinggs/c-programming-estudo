#include <stdio.h>

int main(void){
int x;

printf("Insira número de até 4 digitos:\n");
scanf("%d", &x);

if(x>=0 && x<=9){
printf("\n%d tem 1 digito", x);
}

if(x>=10 && x<=99){
printf("\n%d tem 2 digitos", x);
}

if(x>=100 && x<=999){
printf("\n%d tem 3 digitos", x);
}

if(x>=1000 && x<=9999){
printf("\n%d tem 4 digitos", x);
}

return 0;
}
