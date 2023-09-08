#include<stdio.h>
int main(){
int i,n,sum=0;
printf("Enter your index number: ");
scanf("%d",&n);
int arr[n];
printf("The values store into the array are: \n");
for(i=0;i<n;i++){
   printf("element-%d: ",i);
   scanf("%d",&arr[i]);
}
printf("Sum of the array element: ");
for(i=0; i<n; i++){
   sum = sum + arr[i];
}
printf("%d\n",sum);
return 0;
}