#include<stdio.h>
int main()
{
   long long a,b,c,d,x;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
   x = (a*b)-(c*d);
   printf("Difference = %lld",x);

   return 0;
}
