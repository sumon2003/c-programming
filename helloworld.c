#include<stdio.h>
int main()
{
   float a,b,ab_floor,ab_ceil,ab_round;
   scanf("%f %f",&a,&b);
   ab_floor = floor(a/b);
   ab_ceil = ceil(a/b);
   ab_round = round(a/b);
   printf("floor %.0f / %.0f = %.0f\n",a,b,ab_floor);
   printf("ceil %.0f / %.0f = %.0f\n",a,b,ab_ceil);
   printf("round %.0f / %.0f = %.0f\n",a,b,ab_round);

   return 0;
}
