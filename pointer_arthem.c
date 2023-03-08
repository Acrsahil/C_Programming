#include<stdio.h>

int main(){
    int i = 2;

    int *ptr = &i; // int pointer 
    char *ptri = &i; // Character pointer
    printf("The address of i is %u\n ",ptr);
    ptr++;
    printf("The value of ptr is %u\n ",ptr);

    printf("The address of i is %u\n ",ptri);
    ptri++;
    printf("The value of ptr is %u\n ",ptri);
    
    return 0;
}