#include<stdio.h>
int main(){
char name[]= "C programme";
char compare[] = "C programme";
int cmpr;
cmpr=strcmp(name,compare);
if(cmpr==0)
  printf("String two are equal.");
else
  printf("String two are not equal.");

return 0;
}