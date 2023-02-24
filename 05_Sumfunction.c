#include<stdio.h>

/* sum is a function which takes a and b as input and returns an 
interger as an output */
int sum(int a, int b); // function prototype decleration
int main(){
    int c;
    c = sum(2,5); // function call
    printf("The sum of a and b is %d\n",c);
    return 0;
}


int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}