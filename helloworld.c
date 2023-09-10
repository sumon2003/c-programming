#include<stdio.h>
int main(){
int a,b,c, sum,minus,multiply;
char s,q;
scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
sum = a + b;
minus = a - b;
multiply = a * b;
if(sum==c || minus==c || multiply==c){
    printf("Yes\n");
}   
else if(sum!=c && s=='+'){
    printf("%d",sum);
}
else if(minus!=c && s=='-'){
    printf("%d",minus);
}
else if(multiply!=c && s=='*'){
    printf("%d",multiply);
}

return 0;
}