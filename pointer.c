#include<stdio.h>

int main(){
    int i = 8; 
    int *j; // declaration a pointer variable "j" which type is int
    j = &i; // store address of i in j
    printf("Add i = %u\n",j);


    return 0;
}