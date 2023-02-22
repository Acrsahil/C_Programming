#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The total sum of given number is %d",sum(n));
    return 0;
}
int sum(int n){
    int result;
    if (n == 1){
        return 1;
    }
    else{
        result = n + sum(n-1);
        return result;
    }
}