#include<stdio.h>
int hlen(char *st){
    int len = 0;
    while(*st!='\0'){
        len++;
        st++;
        
    }
    return len;
}
int main(){
    char st[] = "harry";
    int l = hlen(st);
    printf("The length of the string is %d\n",l);


    return 0;
}