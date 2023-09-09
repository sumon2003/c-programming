#include<stdio.h>
int main(){
int N,year,month,day;
scanf("%d",&N);
year = N/365;
month = (N-(year*365))/30;
day = N-((year*365)+(month*30));
printf("%d years\n",year);
printf("%d months\n",month);
printf("%d days\n",day);
return 0;
}