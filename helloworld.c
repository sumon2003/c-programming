#include<stdio.h>
int main(){
int T,X,Y,i;
scanf("%d", &T);
for(i=0;i<T;i++){
  scanf("%d%d",&X,&Y);

if(X>Y){
  printf("LOSS\n");
}
else if(X<Y){
  printf("PROFIT\n");
}
else{
  printf("NEUTRAL\n");
}
}
return 0;
}