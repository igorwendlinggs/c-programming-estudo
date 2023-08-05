#include <stdio.h>

int main(void){
float valor,taxa=0;

printf("Insira sua renda:\n");
scanf("%f", &valor);

if (valor < 750)
	taxa=0.01*valor;

else if (valor <=2250){
	taxa=7.50;
	if(valor>750)
	taxa+=(0.02*valor);
	}

else if (valor <=3750){
	taxa=37.50;
	if(valor>2250)
	taxa+=(0.03*valor);
	}

else if (valor<=5250){
	taxa=82.50;
	if(valor>3750)
	taxa+=(0.04*valor);
	}

else if (valor<=7000){
	taxa=142.50;
	if(valor>5250)
	taxa+=(0.05*valor);
	}
else if (valor>7000){
	taxa=230+(0.06*valor);
	
	}

printf("valor da comissao: %.2f\n\n", taxa);

return 0;
}
