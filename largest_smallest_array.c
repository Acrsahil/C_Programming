// Write a C program to find the largest and smallest element in an array.
#include<stdio.h>

int main(){
    int arr[] = {100,500,3,4,2000,6,7,2};
     int size = sizeof(arr)/4;
     int smallest = arr[0];
     int largest = arr[0];
     int i;
     for(i=0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        
        }if(arr[i]<smallest){
           smallest = arr[i];
            
        }
        }
     
        printf("The largest number in array is %d\n",largest);
        printf("The smallest number in the array is %d\n",smallest);
        return 0;
     }
    