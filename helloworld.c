#include<stdio.h>
int main()
{
    int a,b,i;
    for(i=0; i<3000; i++){
        scanf("%d%d",&a,&b);
        if(a>b){
            printf("%d %d\n",b,a);
        }
        else if(a<b){
            printf("%d %d\n",a,b);
        }
        else if(a==0 && b==0){
            break;
        }
        else if(a==b){
            printf("%d %d\n",a,b);
        }
    }

   return 0;

}
