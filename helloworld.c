#include<stdio.h>

// Create a function
void myFunction(){
    printf("I just got executed!");
}
int main()
{
    myFunction(); //call the function
    printf("Hello World.\n");

    int i = 60;
    int p = 30;

    printf("Result:%d\n", i + p);
    printf("%d\n", i * p);
    printf("%d\n", i - p);
    printf("%d\n", i / p);

    printf("Hello jishan\n");
    printf("Sylhet e prochur hindu.\n");
    printf("Tis is MD Sumon.");
    printf("I'm a programmer");
    printf("This world going to be.....");
    printf("I think this is difficult.");

    int q = 75;
    q = 50;
   int r = 50;
    r = 30;
    printf("%d\n", q);
    printf("Addition:%d\n", q + r);
    printf("Multiplication:%d\n", q * r );
    printf("%d\n", r);

    char myChar = 'A';
    printf("%c\n", myChar);
    
    int a = 50;
    a = 100;
    int b = 30;
    b = 200;

    printf("%d\n", a + b);
    printf("%d\n", a % b);
    printf("%d\n", a ^ b);
    printf("%d\n", a & b);
    printf("%d\n", a - b); 
    printf("%d\n", a * b);
    printf("%d\n", a * a);
    printf("%d\n", b * b);
    printf("%d\n", a - a);

    float Float = 3.9567;
    printf("%f\n", Float);
    printf("%.2f\n", Float);
    printf("%.3f\n", Float);

      

   
    
    
    return 0;
}