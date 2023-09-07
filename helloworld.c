#include<stdio.h>
int main(){
char source[]="Md Sumon Hossain Khan";
char target[100];

strcpy(target,source);
printf("Source String: %s\n",source);
printf("Target String: %s\n",target);

return 0;
}