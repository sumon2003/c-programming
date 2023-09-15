#include<stdio.h>
int main(){
int n,i,value,sum=0;
float avg;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&value);
    sum = sum + value;
}
printf("Sum = %d\n",sum);
avg = (float)sum/n;
printf("Average = %.3f\n",avg);
return 0;
}