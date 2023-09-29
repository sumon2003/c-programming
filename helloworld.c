#include<stdio.h>
int main()
{
  long long a,b,c,d,last_2_digit;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  //lat 2 digit of a number = num % 100
  last_2_digit = (((a*b)%100)*((c*d)%100))%100;
  printf("%02lld\n",last_2_digit);

  return 0;
}
