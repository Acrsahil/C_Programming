#include<stdio.h>

int main(){
    int num = 45;
    FILE *file;
    file = fopen("generated.txt","w");
    fprintf(file,"The number is %d\n",num);
    fprintf(file,"Thanks for using fprintf");
    fclose(file);
    return 0;
}