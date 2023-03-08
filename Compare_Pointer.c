#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[2];

    if (ptr1 == ptr2) {
        printf("ptr1 and ptr2 point to the same memory address\n");
    } else {
        printf("ptr1 and ptr2 point to different memory addresses\n");
    }

    if (ptr1 < ptr2) {
        printf("ptr1 points to a memory address that is lower than ptr2\n");
    } else {
        printf("ptr1 points to a memory address that is higher than ptr2\n");
    }

    return 0;
}
