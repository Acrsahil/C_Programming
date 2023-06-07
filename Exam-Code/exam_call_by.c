#include<stdio.h>
void call_by_value(int a,int b){ // Taking the value from the main function 
    int temp = a;
    a = b;
    b = temp;
}
void call_by_ref(int *a,int *b){ // Taking the address direclty form the main function 
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
int main(){
    int a = 5;
    int b = 10;

    call_by_value(a,b); // Giving The value
    printf("call_by_value\n a = %d and b = %d\n",a,b);

    call_by_ref(&a,&b); // Giving the address
    printf("call_by_ref\n a = %d and b = %d\n",a,b);

    return 0;
}