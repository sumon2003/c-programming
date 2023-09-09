#include<stdio.h>
int main(){
int lift_capacity = 500,X,Y,T,friends_capacity,i;
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%d%d",&X,&Y);
    friends_capacity = X*Y;
    if(X<=8 && friends_capacity<=lift_capacity){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}