#include<stdio.h>

int main(){
    int n = 20;
    int *ptr = &n;
    printf("The address of n is %u",ptr);
    return 0;
}
