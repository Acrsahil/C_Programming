#include <stdio.h>
#include <stdbool.h>

int main() {
int n;
    printf("How many data you want to insert in your array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    int num[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        bool is_duplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = true;
                break;
            }
        }
        if (is_duplicate == false) {
            num[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        printf("The %d element is %d\n", i+1,num[i]);
    }
    return 0;
}
