#include <stdio.h>
int main() {
int code_of_product1,code_of_product2, units_product1, units_product2;
float price_product1, price_product2, amount_paid1, amount_paid2, total_paid;
scanf("%d%d%f",&code_of_product1,& units_product1,&price_product1);
scanf("%d%d%f",&code_of_product2,& units_product2,&price_product2);
amount_paid1 = units_product1 * price_product1;
amount_paid2 = units_product2 * price_product2;
total_paid = amount_paid1 + amount_paid2;
printf("VALOR A PAGAR: R$ %.2f\n", total_paid);

return 0;
}