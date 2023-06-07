#include<stdio.h>

int main(){
    FILE *file;
    char c;
    file = fopen("getcdemo.txt","r");
    c = fgetc(file);
    fputc('c',file);

    while(c!=EOF){
        printf("%c",c);
        c = fgetc(file);

    }

    return 0;
}