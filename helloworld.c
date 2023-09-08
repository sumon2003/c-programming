#include<stdio.h>
int main(){
int i,n;
printf("Enter your element number: ");
scanf("%d",&n);
int arr[100],arr2[100];
printf("The values store into the array are: \n");
for(i=0;i<n;i++){
   printf("element-%d: ",i);
   scanf("%d",&arr[i]);
}
printf("The elements stored in first array: ");
for(i=0;i<n;i++){
  printf("%d ",arr[i]);
}
for(i=0;i<n;i++){
  arr2[i] = arr[i];
}
printf("\nThe elements copied into the second array: ");
for(i=0;i<n;i++){
  printf("%d ",arr2[i]);
}

return 0;
}