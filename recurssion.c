#include<stdio.h>
int factorial(int x);

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("The value of factorial %d is %d\n",a,factorial(a)); // function call
    return 0;
}

int factorial(int x){
    if (x==1 || x == 0){ 
        return 1;
    }else{
        return x * factorial(x-1); // it will call the function untill the condition will match
    }
}