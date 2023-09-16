//Write a program to find a character is vowel or not, if vowel print ‘Yes’, otherwise print ‘No’

#include<stdio.h>
int main()
{
   char x;
   scanf("%c",&x);
   if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
    printf("Yes");
   }
   else{
    printf("No");
   }
   
    return 0;
}    