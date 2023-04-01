#include<stdio.h>
#include<string.h>
int strlens(char *c){
    int count=1;
    char *ptr = c;
    while(*ptr!='\0'){
        count++;
        *ptr++;
    }
    return count;

}

int main(){
    char st[]="sahil";
    int count = strlens(st);
    printf("the length of the given string is %d\n",count);
    return 0;
}