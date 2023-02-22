#include<stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg){
     *sum = a+b;
     *avg = (float)(*sum)/2; // Type cast to  float
}
int main(){
    int i=3,j=6,sum;
    float avg;
    sumAndAvg(i,j,&sum,&avg); // Also passing the address of sum and avg
    printf("The value of sum is %d\n",sum);
    printf("The value of average is %f\n",avg);
    
    return 0;
}