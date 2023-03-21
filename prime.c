#include<stdio.h>

int main(){
    int num;
    int is_prime;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i=2;i<=num;i++){
        is_prime = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime){
           printf("The prime number is :%d\n",i);
        }

    }
    return 0;
}