#include<stdio.h>

int main(){
    FILE *filer;
    FILE *filew;
    int num;
    filer = fopen("double_int.txt","r");
    fscanf(filer,"%d",&num);
    printf("Initial value: %d\n",num);

    filew = fopen("double_int.txt","w");
    num = num*num;
    fprintf(filew,"%d",num);
    printf("final value: %d\n",num);

    fclose(filer);
    fclose(filew);
    return 0;
}