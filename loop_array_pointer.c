#include <stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    // ptr = marks; it will also work as the same
    for (int i = 0; i < 4; i++){
        printf("Enter the value of %dth students: ", i + 1);
        scanf("%d", ptr);
        ptr++;

    }
 
        for (int i = 0; i < 4; i++){
            printf("The value of %d is %d \n", i + 1,marks[i]);
            ptr++;
        }
        return 0;
    }
