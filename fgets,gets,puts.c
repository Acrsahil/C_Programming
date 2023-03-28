#include<stdio.h>

int main(){
    char str[32];
    printf("Enter the sentence: ");
    fgets(str,32,stdin);
    puts(str);
    return 0;
}