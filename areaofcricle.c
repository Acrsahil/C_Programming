#include<stdio.h>

int main(){
    float radious;
    float pi = 3.14;
    int height;
    printf("Enter a radious of circle : ");
    scanf("%f",&radious);
    printf("Enter a height of cricle : ");
     scanf("%d",&height);
    printf("The area of given circle is: %f\n", pi*radious*radious);
    printf("The volume of given cylinder is: %f\n", pi*radious*radious*height);
    return 0;
}