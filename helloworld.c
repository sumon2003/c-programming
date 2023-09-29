#include<stdio.h>
#include<math.h>
int main()
{
  long long a,b,c,d;
  
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  double pow1 = pow(a, b);
  double pow2 = pow(c, d);
  if(pow1 > pow2){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
