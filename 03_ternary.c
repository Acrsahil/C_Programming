#include<stdio.h>

int main(){
    int a ;
    printf("Enter a: ");
    scanf("%d",&a);
    // One liner
    (a<5) ? printf("A is less then 5\n") : printf("A is not less then 5\n");
    return 0;
}