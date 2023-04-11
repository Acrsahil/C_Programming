#include<stdio.h>

    typedef struct complex{
        int real;
        int image;
        
    }comp;
    
    void display(comp c){
        printf("The  real number is %d\n",c.real);
        printf("The complex number is %d\n",c.image);
    }
int main(){
    comp cnums[5];
    
    for(int i = 0;i<5;i++){
        printf("Enter the %d real number: ",i+1);
        scanf("%d",&cnums[i].real);
        printf("Enter the %d complex number: ",i+1);
        scanf("%d",&cnums[i].image);
    }
    for(int i = 0;i<5;i++){
        display(cnums[i]);
    }
    
}
