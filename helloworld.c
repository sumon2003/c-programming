#include<stdio.h>
int main()
{
  int a,b;
  char s;
  scanf("%d %c %d",&a,&s,&b);
  if(a<b && s=='<'){
    printf("Right");
  }
  else if(a>b && s=='>'){
    printf("Right");
  }
  else if(a==b && s=='='){
    printf("Right");
  }
  else{
    printf("Wrong");
  }

  return 0;
}
