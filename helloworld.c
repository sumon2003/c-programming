#include<stdio.h>
int main(){
int T,a,b,c,i;
scanf("%d", &T);
for(i=0;i<T;i++){
  scanf("%d%d%d",&a,&b,&c);
  if(a+b==c || b+c==a || c+a==b){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
}
  
return 0;
}