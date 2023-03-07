#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter the value of marks Student 1\n");
    scanf("%d",&marks[0]);
    printf("Enter the value of marks Student 2\n");
    scanf("%d",&marks[1]);
    printf("Enter the value of marks Student 3\n");
    scanf("%d",&marks[2]);
    printf("Enter the value of marks Student 4\n");
    scanf("%d",&marks[3]);
    printf("Enter the value of marks Student 4\n");
    scanf("%d",&marks[4]);

    printf("You have entered %d %d %d %dand %d",marks[0],
        marks[1],marks[2],marks[3],marks[4]);
    return 0;
}