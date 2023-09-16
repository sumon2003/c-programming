//Write a program to find a character is vowel or not, if vowel print ‘Vowel’, if consonant print ‘Consonant’, otherwise print ‘Not an Alphabet’

#include<stdio.h>
int main()
{
   char x;
   scanf("%c",&x);
   if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
    printf("Vowel");
   }
   else if((x >'a' && x<='z') || (x>'A' && x<='Z')){
    printf("Consonant");
   }
   else{
    printf("Not an Alphabet");
   }
   
    return 0;
}    