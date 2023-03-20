#include <stdio.h>

void print_array(int *arr, int rows, int cols){
int arr[rows][cols];
        printf("\n2D Array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t",*(arr[i][j]+1));
        }
        printf("\n");
    }
}


int main(){
    int num_rows, num_cols;
    printf("Enter the number of rows: ");
    scanf("%d", &num_rows);
    printf("Enter the number of columns: ");
    scanf("%d", &num_cols);

    int my_array[num_rows][num_cols];
    for (int i=0;i<num_rows;i++){
        for(int j=0;j<num_cols;j++){
            printf("Enter the value of row %d and column %d: ",i+1,j+1);
            scanf("%d",&my_array[i][j]);
        }
    }
    print_array(my_array,num_rows,num_cols);
    return 0;
}

