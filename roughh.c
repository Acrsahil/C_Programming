#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 3, 4,5, 5};
    int size = sizeof(arr) / sizeof(int);
    int initial = arr[0];
    for (int i = 0;i<size;i++){
        int count = 0;
       for(int j=0;j<size;j++){
        if(i!=j && arr[i]==arr[j]){
            count ++;
        }

       }
       printf("The %d is repeated %d times\n",arr[i],count+1);
    }
    return 0;
}
