#include <stdio.h>
#include <math.h>

int main() {
   int a, b, c, sum;
   float average;
   printf("Enter your value of a, b, c: ");
   scanf("%d%d%d",&a,&b,&c);
   sum = a + b + c;
   average = (float)sum / 3;
   printf("The sum of a+b+c = %d\n", sum);
   printf("The average of a,b,c = %.2f\n",average);
return 0;
}