#include<stdio.h>

int main(){
    int max = 50;
    int A[max][max];
    int B[max][max];
    int m,n;
    int sum[max][max];
    int sub[max][max];

    printf("matrix a: ");
    printf("Enter the row of matrix A: ");
    scanf("%d",&m);
    printf("Enter the column of matrix A: ");
    scanf("%d",&n);

    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            printf("Enter the [%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            printf("Enter the [%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("The sum of the matrix are below\n");
    
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
           sum[i][j] = A[i][j]+B[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
        
    printf("The subtraction of the matrix are below\n");
    
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
           sub[i][j] = A[i][j]-B[i][j];
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }


    return 0;
}