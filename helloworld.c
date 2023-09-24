#include<stdio.h>
int main()
{
    
    int a,b,c,c1,c2,t,i;
    scanf("%d",&t);
    
    for(i=0; i<t; i++){
        scanf("%d%d%d",&a,&b,&c);
        c1 = a+b;
        c2 = a-b;
        if(c1==c){
            printf("+\n");
        }
        else if(c2==c){
            printf("-\n");
        }
    }
   

    return 0;

}
