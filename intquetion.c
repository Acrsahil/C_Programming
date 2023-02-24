#include<stdio.h>

int main(){
    int a = 5;
    printf("%d %d %d",a,++a,a++); // printf always see the arguments from right to left
    return 0;
}