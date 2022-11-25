#include <stdio.h>

int main(void) {
  int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16;
  printf("Digite 16 numeros inteiros quaisquer:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12, &x13, &x14, &x15 ,&x16);
  printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15 ,x16);

printf("\nSoma por linha : %d, %d, %d, %d\n",(x1+ x2+x3+x4), (x5+ x6+ x7+ x8), (x9+ x10+ x11+ x12), (x13+ x14+ x15 +x16));
  
printf("Soma por coluna: %d %d %d %d\n",(x1+x5+x9+x13),(x2 + x6 + x10 + x14),(x3 + x7 + x11 + x15), (x4 + x8 + x12 + x16));


printf("Soma por diagonal: %d, %d",(x1+x6+x11+x16), (x4+x7+ x10 + x13));

    
return 0;

}
