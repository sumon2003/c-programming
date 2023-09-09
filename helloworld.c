#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++){
    int even =2*i;
    if(n%2==0 && even<=n){
        printf("%d\n",even);
    }
    else if(n%2!=0 && even<n){
        printf("%d\n",even);
    }
    else if(even<2 || n<2){
        printf("-1\n");
    }
}
return 0;
}