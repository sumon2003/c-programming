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

    int day = 5;
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 4:
        printf("Thursday");
        break;
        default:
        printf("Looking forward to the weekend");
    }

    
    return 0;
}
