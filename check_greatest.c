#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the value of a: \n");
    scanf("%d",&a);

    printf("Enter the value of b: \n");
    scanf("%d",&b);

    printf("Enter the value of c: \n");
    scanf("%d",&c);

    printf("Enter the value of d: \n");
    scanf("%d",&d);
    
    if(a>b && a>c && a>d){
        printf("The value of a %d is the greatest number\n",a);
        }else if (b>a && b>c && b>d){
            printf("The value of b %d is the greatest number\n",b);
        }else if (c>a && c>b && c>d){
            printf("The value of c is %d is the greatest\n",c);
        }else{
            printf("The value of d is %d is the greatest number\n",d);
        }
    return 0;
}