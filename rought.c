#include <stdio.h>

#define MAX 50

// Define a function to perform matrix multiplication
void matrix_multiplication(int a[][MAX], int b[][MAX], int product[][MAX], int row1, int col1, int row2, int col2) {
    int sum = 0;
    if (col1 != row2) {
        printf("!Warning different indices of matrix\n");
    } else {
        // Perform matrix multiplication
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                for (int k = 0; k < col1; k++) {
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
        // Print the resulting matrix
        printf("***The Multiplication of Matrix A X Matrix B***\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    int row1, col1;
    int row2, col2;
    int a[MAX][MAX];
    int b[MAX][MAX];
    int product[MAX][MAX];

    printf("Enter the rows of the first matrix: ");
    scanf("%d", &row1);

    printf("Enter the columns of the first matrix: ");
    scanf("%d", &col1);

    printf("Enter the rows of the second matrix: ");
    scanf("%d", &row2);

    printf("Enter the columns of the second matrix: ");
    scanf("%d", &col2);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // Call the matrix multiplication function
    matrix_multiplication(a, b, product, row1, col1, row2, col2);

    return 0;
}
