#include<stdio.h> //
int main(){
	int i,n,sum=0;
	printf("Enter N: ");
	scanf("%d",&n);
	int array1[n];
	for(i=0; i<n; i++){
		scanf("%d",&array1[i]);
	}
	for(i=0; i<n; i++){
		sum=sum+array1[i];
	}
	printf("%d", sum);

return 0;
}

