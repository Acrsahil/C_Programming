#include<stdio.h>

int main(){

    FILE *file1;
    FILE *file2;
    file1 = fopen("a.txt","r");
    file2 = fopen("b.txt","w");
    
        char c = fgetc(file1);
    while(c!=EOF){
        fputc(c,file2);
        fputc(c,file2);
        c = fgetc(file1);

    }
    fclose(file1);
    fclose(file2);

    return 0;
}