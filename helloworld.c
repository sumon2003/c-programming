#include<stdio.h>
int main()
{
   long long x,y,sum,multiply,subtract;
   scanf("%lld %lld",&x,&y);
   sum = x+y;
   multiply = x*y;
   subtract = x-y;
   printf("%lld + %lld = %lld\n",x,y,sum);
   printf("%lld * %lld = %lld\n",x,y,multiply);
   printf("%lld - %lld = %lld\n",x,y,subtract);

   return 0;

}
