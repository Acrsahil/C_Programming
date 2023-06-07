#include<stdio.h>

int main(){
    FILE *file;
    file = fopen("practise.txt","r+");
    // char c = fgetc(file);
    // fprintf(file,"sahil is s");
    // char str[20]; // initilizing character array
    // fgets(str,20,file); // it is used to take string from the file
    // printf("The first character of this file is : %s \n",str); // print string from the file
    fputc('v',file); 
    // printf("The first character of this file is : %s \n",str); // print string from the file
    fclose(file);
    return 0;
}