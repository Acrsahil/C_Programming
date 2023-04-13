// Online C compiler to run C program online
#include <stdio.h>


typedef struct number{
    int real;
    int img;
}comp;

void display(comp c){
    printf("The real numbers is %d\n",c.real);
    printf("The img numbers is %d\n",c.img);
}
int main() {
    comp cnums[5];
    for(int i = 0;i<5;i++){
        printf("Enter the real number ");
        scanf("%d",&cnums[i].real);
        printf("Enter the img number ");
        scanf("%d",&cnums[i].img);
    }
    for(int i = 0;i<5;i++){
         display(cnums[i]);
    }
  

    return 0;
}
