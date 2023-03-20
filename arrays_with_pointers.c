#include<stdio.h>
void printArray(int *ptr, int n){
    for (int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    ptr[2] = 55555; // This value will be changes in arr array of main as well
}
int main(){
    int arr[] = {15,2,234,234,98,23,98};
    printArray(arr,7);
    printf("%d\n",arr[2]);
    return 0;
}