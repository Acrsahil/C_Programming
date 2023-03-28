#include<stdio.h>

int main(){
int range,is_prime;


printf("Enter the range: ");
scanf("%d",&range);

for(int i = 1;i<range;i++){
    is_prime = 1;
    for(int j = 2;j<i;j++){
        if(i%j==0){
            is_prime=0;
            break;
        }
    }
         if(is_prime == 1){
        printf("prime number are: %d\n",i);
    }
    
    }
    
   


    return 0;
}