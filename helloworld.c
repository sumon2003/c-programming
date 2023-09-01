#include<stdio.h> //Linear Search
int main(){
	int num[]={10,20,30,40,50};
	int value,position = -1,i;
	printf("Enter the value you want to search: ");
	scanf("%d", &value);
	for(i=0; i<5; i++)
	{
		if(value==num[i])
		{
			position = i+1;
			break;
		}
	}
	if(position==-1)
	{
		printf("Item is not found.\n");
	}
	else
	{
		printf("The value is found at position %d.\n",position);
	}


return 0;
}

