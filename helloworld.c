#include<stdio.h>
#include<math.h>
int main()
{
  float x,p,cost_sell_prize;
  float main_prize;
  scanf("%f %f",&x,&p);
  cost_sell_prize = 100-x;
  main_prize = (100/cost_sell_prize)*p;
  printf("%.2f",main_prize);
  return 0;
}
