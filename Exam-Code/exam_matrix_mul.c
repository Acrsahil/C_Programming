#include<stdio.h>

int main(){
    int row1,col1;
    int sum = 0;
    int max = 50;
    int a[max][max];
    int b[max][max];
    int product[max][max];

    printf("Enter the rows of the first matrix: ");
    scanf("%d",&row1);
    printf("Enter the columns of the first matrix: ");
    scanf("%d",&col1);
    int row2,col2;
   printf("Enter the rows of the second matrix: ");
    scanf("%d",&row2);
    printf("Enter the columns of the second matrix: ");
    scanf("%d",&col2);



  if(col1!=row2){
    printf("!Warning different indices of matrix\n");

  }
  else{
    for(int i = 0;i<row1;i++){
        for(int j = 0;j<col1;j++){
            printf("Enter [%d][%d] element: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("**The first matrix***\n");
    for(int i = 0;i<row1;i++){
        for(int j = 0;j<col1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0;i<row2;i++){
        for(int j = 0;j<col2;j++){
            printf("Enter [%d][%d] element: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("**The Second matrix***\n");
    for(int i = 0;i<row2;i++){
        for(int j =0;j<col2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<row1;i++){
        for(int j = 0;j<col2;j++){
            for(int k = 0;k<col1;k++){
                sum += a[i][k]*b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
  printf("***The Mutlipicaiton of Matrix A X Matrix B \n");
  for(int i = 0;i<row1;i++){
    for(int j = 0;j<row1;j++){
        printf("%d\t",product[i][j]);
    }
    printf("\n");
  }

  }
    return 0;
}