//Given an array of 15 integers, find the maximum of the array solution
#include<stdio.h>
int main()
{

    int arr[15],i,max;
    for(i=0; i<15; i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=0; i<15; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d\n",max);


   
    return 0;
}    