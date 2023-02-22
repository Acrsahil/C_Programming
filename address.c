#include<stdio.h>

int main(){
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The address of the variable  a is %d\n",*ptr);
    printf("The address of the variable  a is %u\n",ptr);
    return 0;
}