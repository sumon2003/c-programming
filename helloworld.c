#include<stdio.h>
int main(){
char name[100];
printf("Enter your full name: ");
gets(name);
printf("Fullname: %s",name);
return 0;
}