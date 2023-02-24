#include<stdio.h>

int main(){
    int fact=1,i,n;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        fact*=i;
    }
    printf("The factorial of the given number is %d\n",fact);
    return 0;
}