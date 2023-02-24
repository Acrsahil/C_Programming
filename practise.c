#include<stdio.h>

int main(){
    int i;
    int j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
        //for(j=1;j<=i;j++){
printf("#");
        }
        printf("\n");
    }
    return 0;
}