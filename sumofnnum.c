#include<stdio.h>

int main(){
    int n,sum=0,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum of given number from 1 to %d is %d\n",n,sum);
    return 0;
}