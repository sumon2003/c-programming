#include <stdio.h>

int main(){
    int time = 20;
    if(time < 15){
        printf("Good Day");
    }else{
        printf("Good Evening");
    }
    
    int mycash = 5000;
    if(mycash < 3000){
        printf("I have some money.");
    }else if(mycash > 3000){
        printf("I have thousand money.");
    }else{
        printf("There is no money.");

    }

    int day;
    printf("Enter your number:");
    scanf("%d", &day);
    
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        default:
        printf("Looking forward to the weekend\n");
    }

    int i = 0;

    while(i < 5){
        printf("%d\n", i);
        i++;
    }

    
    do{
        printf("%d\n", i);
        i++;
    }
    while(i < 11);

  /* int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table *
    upper = 300; /* upper limit *
    step = 20; /* step size 
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    } */

     int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));



    
    return 0;
}
