#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}
int main(){
    char c[] = "my name is programming";
    encrypt(c);
    printf("The encrypted value of the given string is %s\n",c);
    return 0;
}