#include<stdio.h>


float fernihit(float c);
// function decleration 

int main(){
    float celcious;
    printf("Enter the celcious\n");
    scanf("%f",&celcious);
      // %.2 means show only 2 digit after decimal
    printf("The ferenihite value of %f celcious is %.2f\n",celcious,fernihit(celcious));
    //function call
    return 0;
}
float fernihit(float c){
    //function defination 
    float result;
    result = (c * 9 / 5) + 32;
    return result;
}