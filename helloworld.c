#include<stdio.h>
int main(){
char name[]= "C programme";
char compare[] = "C programme";
int cmpr;
cmpr=strcmp(name,compare);
printf("%d",cmpr);

return 0;
}