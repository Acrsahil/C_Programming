#include<stdio.h>
void decrypted(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr-1;
        ptr++;
    }
}
int main(){
    char c[] = "nz!obnf!jt!qsphsbnnjoh";
    decrypted(c);
    printf("The decrypted value of the given string is %s\n",c);
    return 0;
}