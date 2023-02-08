#include<stdio.h>

int main(){
    int l,b,Area;
    printf("Enter a length of the reactangle: ");
    scanf("%d",&l);

    printf("Enter a breath of Rectangle: ");
    scanf("%d",&b);
    Area = l * b;
    printf("The area of rectangle which length is %d and bredth is %d is : %d\n",l,b,Area);

    return 0;
}