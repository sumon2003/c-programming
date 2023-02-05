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
        printf("There is no money\n");
    }
    
    return 0;
}
