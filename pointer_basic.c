#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j wil store the address of i
    printf("The value of i is %d\n",i);// it will print the value of i
    printf("The value of i is %d\n",*j);// using * printing the value of i
    printf("The address of i is %u\n",&i);// printing the address of i using & operator
    printf("The address of i is %u\n",j);// printing the address of i using ptr variable "j"
    printf("The address of j is %u\n",&j);
    printf("The address of j is %u\n",&j);
    return 0;
}