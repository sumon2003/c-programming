#include<stdio.h>
int main()
{
   long long n,m,ldn,ldm,sum_ld;//last digit = ld = num%10
   scanf("%lld %lld",&n,&m);
   ldn = n%10;
   ldm = m%10;
   sum_ld = ldn + ldm;
   printf("%lld\n",sum_ld);

   return 0;
}
