#include<stdio.h> //Fibonacci Series
int main(){
	int n,i;
	printf("How many Fibonacci numbers: ");
	scanf("%d",&n);
	int array[n];
	array[0]=0;
	array[1]=1;
	for(i=2; i<n; i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",array[i]);
	}


return 0;
}

