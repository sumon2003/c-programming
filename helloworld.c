#include <stdio.h>
#include <math.h>

int main() {
   int i, n, value=0;
   scanf("%d",&n);
   for(i=0; i<=n; i++)
   {
       value = value + 1; 
   }
   printf("[0,25]");
   for(i=25; i<=n; i++)
   {
	  printf("(%d,%d]",value, value+25);
   }
   
return 0;
}