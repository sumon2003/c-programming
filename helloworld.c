#include <stdio.h>
int main(void) {
	int x,y,sum;
	scanf("%d%d", &x,&y);
	sum = x+y;
	if(sum>6){
	    printf("YES\n");
	}else{
	    printf("NO\n");
	}
	return 0;
}

