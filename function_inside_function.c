#include<stdio.h>

// function decleration
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    
    // function call
    goodMorning();
    return 0;
}

// function defination
void goodMorning(){
    printf("Good Morining sahil\n");
    goodNight(); // function call
}
void goodAfternoon(){
    printf("Good Afternoon sahil\n");
    
}
void goodNight(){
    printf("Good Night sahil\n");
    goodAfternoon(); // function call

}