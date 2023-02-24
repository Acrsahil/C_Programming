// far = (celcious * 9 / 5) + 32;
#include<stdio.h>

int main(){
    float celcious,far;
    printf("Enter the value of celcious: ");
    scanf("%f",&celcious);
    far = (celcious * 9 / 5) + 32;
    printf("The faranite of %f celcious is: %f\n",celcious,far);
    return 0;
}