#include<stdio.h>

int main(){
    int a = 20,b = 30,c = 50;
    if(a>b && a>c){
        printf("%d is greatest number\n",a);
    }else if(b>a && b>c){
        printf("%d is the greatest number\n",b);
    }else{
        printf("%d is the greatest number\n",c);
    }
    return 0;
}