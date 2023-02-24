#include<stdio.h>

int main(){
    int i,num;
    printf("Enter the number you want to make multiplication\n");
    scanf("%d",&num);
    printf("****** Multiplication table of %d ******\n\n",num);
    for (i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}