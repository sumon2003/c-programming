#include<stdio.h>
int main()
{
  char x;
  scanf("%c",&x);
  if(x>='0' && x<='9'){
    printf("IS DIGIT\n");
  }
  else if(x>='A' && x<='Z'){
    printf("ALPHA\n");
    printf("IS CAPITAL\n");
  } 
  else if(x>='a' && x<='z'){
    printf("ALPHA\n");
    printf("IS SMALL\n");
  } 


  return 0;
}
