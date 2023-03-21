#include<stdio.h>


void printTable(int *mult,int num, int n){
    for(int i=0;i<n;i++){
        mult[i] = num*(i+1);
        printf("%d X %d = %d\n",num,i+1,mult[i]);
    }
    printf("\n");

}
int main(){
    int m;
    int limit;
    printf("How many multiplication table you want: ");
    scanf("%d",&m);

    printf("How many times to multiply: ");
    scanf("%d",&limit);



    int mult[m][limit]; // m is how many table i want to print
    int n;
    
    for(int i=0;i<m;i++){
        printf("Enter the multiplication table of: ");
        scanf("%d",&n);
        printTable(mult[i], n,limit);
    }
    
    // printTable(mult[1], 7,10);
    // printTable(mult[2], 9,10);


    return 0;
}