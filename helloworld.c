#include<stdio.h>
int main(){
  double a,b, receive,total; 
  char c[100];
  scanf("%s %lf%lf", c,&a,&b);
  receive = b * (15.0/100);
  total = a + receive;
  printf("TOTAL = R$ %.2lf\n",total); 
return 0;
}