//Given an array of 15 integers, find the minimum of the array solution
#include<stdio.h>
int main()
{

    int arr[15],i,min;
    for(i=0; i<15; i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i=0; i<15; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d\n",min);


   
    return 0;
}    