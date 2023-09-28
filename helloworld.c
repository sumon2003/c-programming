#include<stdio.h>
int main()
{
  int a,b,sum,sub,multiply,divide;
  char s;
  scanf("%d%c%d",&a,&s,&b);
  sum = a+b;
  sub = a-b;
  multiply = a*b;
  divide = a/b;
  if(sum==a+b && s=='+'){
    printf("%d\n",sum);
  }
  else if(sub==a-b && s=='-'){
    printf("%d\n",sub);
  }
  else if(multiply==a*b && s=='*'){
    printf("%d\n",multiply);
  }
  else if(divide==a/b && s=='/'){
    printf("%d\n",divide);
  }
  

  return 0;
}
