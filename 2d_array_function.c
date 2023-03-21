#include <stdio.h>

int main() {
    int num_rows, num_cols;
    printf("Enter the number of rows: ");
    scanf("%d", &num_rows);
    printf("Enter the number of columns: ");
    scanf("%d", &num_cols);

    // Create the 2D array and populate it with user input
    int my_array[num_rows][num_cols];
    for(int i = 0; i < num_rows; i++) {
        for(int j = 0; j < num_cols; j++) {
            printf("Enter the value for row %d, column %d: ", i+1, j+1);
            scanf(" %d", &my_array[i][j]);
        }
    }

    // Print the 2D array in row and column form
    printf("\n2D Array:\n");
    for(int i = 0; i < num_rows; i++) {
        for(int j = 0; j < num_cols; j++) {
            printf("%d\t", my_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
