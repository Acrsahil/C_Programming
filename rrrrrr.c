#include <stdio.h>

void print_array(int my_arr[][1000], int rows, int cols){
    for(int i =1; i < rows; i++) {
        for(int j = 1; j < cols; j++) {
            printf("%d\t", my_arr[i][j]);
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

