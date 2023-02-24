#include<stdio.h>
int main(){
    float principle = 1000000,rate = 2.5, time = 5, simple_interest;
    simple_interest = (principle * rate * time)/100;
    printf("The simple interest is : %f\n",simple_interest);
    return 0;
}