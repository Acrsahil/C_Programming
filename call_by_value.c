#include<stdio.h>
int ten_times(int a ,int result){
a = 10 * a;
return a;
}
int main(){
    int x = 5,result;
    printf("The value of x is %d\n",x);
    result = ten_times(x,result);
    printf("The value of x is %d\n",result);
    return 0;
}