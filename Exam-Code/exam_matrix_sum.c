#include<stdio.h>

int main(){
    int max = 50;
    int m,n;
    printf("Enter row and column of matrix: ");
    scanf("%d %d",&m,&n);
    printf("\nEnter Element for the first matrix\n");

    int a[m][n],b[m][n],sum[m][n];

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("Enter [%d][%d] element: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Element for the second matrix\n");
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("Enter [%d][%d] element: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            sum[i][j] = a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}