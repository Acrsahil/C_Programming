#include<stdio.h>

int main(){
    FILE *file;
    int num;
    file = fopen("AcrSahil.txt","r");
    fscanf(file,"%d",&num);
    fclose(file);
    printf("The value of num is %d\n",num);

    return 0;
}