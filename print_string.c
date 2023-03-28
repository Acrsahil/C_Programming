#include<stdio.h>

int main(){
    char str[] = "sahil";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c\n",*ptr);
        ptr++;
    }
    return 0;
}