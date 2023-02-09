#include <stdio.h>

int main(){
    int time = 20;
    if(time < 15){
        printf("Good Day\n");
    }else{
        printf("Good Evening\n");
    }
    
    int mycash = 5000;
    if(mycash < 3000){
        printf("I have some money.\n");
    }else if(mycash > 3000){
        printf("I have thousand money.\n");
    }else{
        printf("There is no money.\n");

    }

    int day;
    printf("Enter your number:");
    scanf("%d", &day);
    
    switch(day){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        default:
        printf("Looking forward to the weekend");
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


    
    return 0;
}
