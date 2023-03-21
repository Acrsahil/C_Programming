#include<stdio.h>

int main(){
    int arr[] = {1,5,3,4,8,6,99,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];
    int largest = arr[0];
    int i;
    for(i=0; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("The largest number in the array is %d\n", largest);
    printf("The smallest number in the array is %d\n", smallest);
    return 0;
}
