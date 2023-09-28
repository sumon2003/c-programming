#include<stdio.h>
int main()
{
  int num,num2;
  scanf("%d",&num);
  num2 = num/1000;
  if(num2%2==0){
    printf("EVEN\n");
  }
  else{
    printf("ODD\n");
  }
  
  return 0;
}
