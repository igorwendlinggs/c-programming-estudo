#include <stdio.h>

int main(void){
float comissao, valor, x;

printf("Entre com o valor da transação:\n");
scanf("%f", &valor);
printf("Insira quantas ações quer comprar:\n");
scanf("%f", &x);

if (valor < 2500.00f)
	comissao = 30.00f + .017f * valor;
else if (valor < 6250.00f)
	comissao = 56.00f + .0066f * valor;
else if (valor < 20000.00f)
	comissao = 76.00f + .0034f * valor;

printf("valor da comissao: %.2f\n\n", comissao);



if(x < 2000){
comissao= (33 + 0.03)*x;
printf("valor da comissão rival: %.2f", comissao);
	}

if(x >= 2000){
comissao= (33 + 0.02)*x;
printf("valor da comissão rival: %.2f", comissao);
	}


return 0;
}
