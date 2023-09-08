#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int arr[n];
printf("The values store into the array are: \n");
for(i=0;i<n;i++){
   printf("element-%d: ",i);
   scanf("%d",&arr[i]);
}
printf("The values store into the array in reverse are: ");
for(i=n-1; i>=0; i--){
  printf("%d ",arr[i]);
}
return 0;
}