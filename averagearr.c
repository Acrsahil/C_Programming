#include<stdio.h>

int main(){
    float avg;
    int i,n,sum = 0;
    int num[100];
    printf("Enter the range of the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the %d of the number: ",i+1);
        scanf("%d",&num[i]);
        sum +=num[i];
    }
    avg = sum/n;
    printf("The average of the given number is %.1f",avg);
    
    return 0;
}