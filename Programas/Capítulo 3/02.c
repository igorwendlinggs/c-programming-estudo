#include <stdio.h>

int main(void) {
  int item,D,M,A;
  float v;

printf("Inserir número do item:\n"); 
scanf("%d", &item);
printf("Inserir preço da unidade: \n"); 
scanf("%f", &v);
printf("Inserir data da compra:\n");
scanf("%d""/""%d""/""%d",&D,&M,&A);

printf("Item N°\t\t""Preço\t\t""Data\t\t""\n");
printf("%d\t\t R$%.2f\t\t %d/%d/%d", item, v, D, M, A);
  return 0;
}
