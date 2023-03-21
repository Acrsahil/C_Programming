#include <stdio.h>

void Accept(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the value of %d row %d column: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            
        }
    }
}


void display(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the rows of the array: ");
    scanf("%d", &rows);
    printf("Enter the columns of the array: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    Accept(rows, cols, arr);
    display(rows, cols, arr);
    

    return 0;
}
