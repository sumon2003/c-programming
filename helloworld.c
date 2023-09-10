#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(c<b && d>b){
    printf("%d %d\n",c,b);
}
else if(c<b && d<b){
    printf("%d %d\n",c,d);
}
else if(c<b && b==d){
    printf("%d %d\n",c,d);
}
else if(c<a && b==d){
    printf("%d %d\n",a,d);
}
else if(c<a && d<b){
    printf("%d %d\n",a,d);
}
else if(c<a && b<d){
    printf("%d %d\n",a,b);
}
else if(a==c && b==d){
    printf("%d %d\n",a,b);
}
else if(a==c && d<b){
    printf("%d %d\n",c,d);
}
else if(a==c && b<d){
    printf("%d %d\n",a,b);
}
else if(b==d && a>c){
    printf("%d %d\n",a,b);
}
else if(c==b && b<d){
    printf("%d %d\n",b,c);
}    
else if(c>b){
    printf("-1\n");
}

return 0;
}