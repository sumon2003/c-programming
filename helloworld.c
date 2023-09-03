#include <stdio.h>
int main() {
int product_code, product_amount;
float Cachorro_Quente, xSalada,xBacon,Torrada_simples, Refrigerante;
scanf("%d%d",&product_code,&product_amount);
Cachorro_Quente = product_amount * 4.00;
xSalada = product_amount * 4.50;
xBacon = product_amount * 5.00;
Torrada_simples = product_amount * 2.00;
Refrigerante = product_amount * 1.50;
if(product_code == 1)
   printf("Total: R$ %.2f\n", Cachorro_Quente);
else if(product_code == 2)
   printf("Total: R$ %.2f\n", xSalada);
else if(product_code == 3)
   printf("Total: R$ %.2f\n", xBacon);
else if(product_code == 4)
   printf("Total: R$ %.2f\n", Torrada_simples);
else if(product_code == 5)
   printf("Total: R$ %.2f\n", Refrigerante);            
return 0;
}