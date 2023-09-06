#include<stdio.h>
int main(){
int n,i,petya,vasya,tonya,count=0;
scanf("%d",&n);
for(i=0; i<n; i++){
   scanf("%d%d%d",&petya,&vasya,&tonya);
    if(petya==1 && vasya==1 && tonya==1)
     count++;
    if(petya==1 && vasya==1 && tonya==0)
     count++;
    if(petya==1 && vasya==0 && tonya==1)
     count++;
    if(petya==0 && vasya==1 && tonya==1)
     count++;
    if(petya==1 && vasya==0 && tonya==0)
     continue;
    if(petya==0 && vasya==1 && tonya==0)
     continue;
    if(petya==0 && vasya==0 && tonya==1)
     continue;
    if(petya==0 && vasya==0 && tonya==0)
     continue;
    
}
printf("%d",count);
return 0;
}