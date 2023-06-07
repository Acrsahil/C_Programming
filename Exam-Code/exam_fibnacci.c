#include<stdio.h>

int fib(int n){
    int ans;
    if(n<=1){
        return n;
    }else{
        ans = fib(n-1) + fib(n-2);
    }
    return ans;
}
int main(){
    int n;
    printf("Enter the value of fibanacci series: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("%d ",fib(i));
    }

    return 0;
}