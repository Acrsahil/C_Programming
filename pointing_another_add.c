#include<stdio.h>

int main(){
    int marks[4];
    int *ptr = &marks;
    for (int a; a<4;a++){
        printf("Enter the value of a \n");
        scanf("%d",&marks[a]);
    }
    printf("The marks[2] is %d\n",marks[2]);
    ptr++;
    printf("The marks[2] is %d\n",*ptr);
    

    return 0;
}
