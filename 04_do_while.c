#include<stdio.h>

int main(){
    int i = ;
    int num;
  
    printf("Enter a range to print natural number: \n");
    scanf("%d",&num);
    do{ // it is the loop which run at least once
        printf("The value of i is %d\n",i);
        i++;
    }while(i<=num);
    return 0;
}