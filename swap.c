#include<stdio.h>

void swap(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int a,b;
    a = 10;
    b = 20;
    printf("before value of a is %d\n",a);
    printf("before value of b is %d\n",b);
    swap (&a,&b);
     printf("after value of a is %d\n",a);
    printf("after  value of b is %d\n",b);


}