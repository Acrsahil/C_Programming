#include<stdio.h>

int main(){
    FILE *file;
    int num;
    file = fopen("AacrSahil.txt","r");

    if(file == NULL){
        printf("This file doesn't not exits\n");
    }else{

    fscanf(file,"%d",&num);
    fclose(file);
    printf("The value of num is %d\n",num);
    }

    return 0;
}