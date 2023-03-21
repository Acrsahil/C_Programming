#include<stdio.h>

int main(){
    int arr[10];
    int *ptr = arr; // it will see first element of the array
    arr[2] = 5;
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("These point to the same location in array\n");
    }
        else{
            printf("These don't point the same location\n");
        }
    
    return 0;
}