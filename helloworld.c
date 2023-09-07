#include<stdio.h>
int main(){
char first_name[] = "Md Sumon ";
char last_name[]="Hossain Khan";

strcat(first_name,last_name);
printf("Full name: %s\n", first_name);

return 0;
}