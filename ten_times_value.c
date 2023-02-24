#include<stdio.h>
void update(int *ptr);
int main(){
    int i = 5;
    printf("The value of i is %d\n",i);
    update(&i); // sending the address to the function 
    printf("The value of i is %d\n",i); //ten times the value of i

    return 0;
}

void update(int *ptr){
    *ptr = 10 * (*ptr); 

}