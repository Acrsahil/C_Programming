#include<stdio.h>

int main(){
    FILE *file;
    int a,b,c;
    file = fopen("Sample_file.txt","r");
    fscanf(file,"%d %d %d",&a, &b ,&c);
    printf("The values of the file is %d %d %d\n",a,b,c);
    return 0;
}