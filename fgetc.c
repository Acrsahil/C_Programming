#include<stdio.h>

int main(){
    FILE *file;
    // fgetc is used to read the file
    // file = fopen("getcdemo.txt","r");
    // char c = fgetc(file);
    
    // printf("The value of my character is %c\n",fgetc(file));
    // printf("The value of my character is %c\n",fgetc(file));
    // printf("The value of my character is %c\n",fgetc(file));
    // printf("The value of my character is %c\n",fgetc(file));
    // printf("The value of my character is %c\n",fgetc(file));
    // printf("The value of my character is %c\n",fgetc(file));

    file = fopen("xputc.txt","w");
    putc('c',file);

    fclose(file);

    return 0;
}