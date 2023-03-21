#include<stdio.h>

void Accept(int rows,int cols){
     int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter the value of %d row %d columns: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
}

void display(int arr[3][3],int rows,int cols){
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int rows,cols;
    printf("Enter the rows of the array: ");
    scanf("%d",&rows);
    printf("Enter the cols of the array: ");
    scanf("%d",&cols);
    Accept(rows,cols);
    display(arr,rows,cols);
    return 0;
}