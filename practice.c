#include<stdio.h>

int main(){
    int n,sum=0,i=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("The sum of given number from 1 to %d is %d\n",n,sum);
    return 0;
}