#include<stdio.h>
int main(){
int n, i, sum = 0, temp;
scanf("%d", &n);
for(i=1; i<=n; i++){
  scanf("%d", &temp);
  if(temp < 0)
    break;
    else
     sum += temp;
}
printf("%d\n", sum);
  return 0;
}