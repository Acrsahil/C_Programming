#include<stdio.h>
int count_po(int size,int *arr){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
    
}
int main(){
    int arr[] = {1,-3,-4,8,7,-8,-9,9,-20,220,221};
    int size = sizeof(arr)/4;
    printf("There are %d positive integer in this array\n",count_po(size,arr));
    return 0;
}